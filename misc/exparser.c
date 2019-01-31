/*
 * expr_parser.c - a recursive-descent parser for simple mathematical
 * expressions
 *
 * The grammar is:
 *
 * expr -> expr '+' term |
 *         expr '-' term |
 *         term
 *
 * term -> term '*' factor |
 *         term '/' factor |
 *         factor
 *
 * factor -> '(' expr ')' |
 *           '-' factor |
 *           NUMBER
 *
 * or, equivalently (to eliminate left recursion):
 *
 * expr  -> term expr'
 * expr' -> '+' term expr' | '-' term expr' | e
 *
 * term  -> factor term'
 * term' -> '*' factor term' | '/' factor term' | e
 *
 * factor -> * '(' expr ')' | '-' factor | NUMBER
 */

/** includes **/
#include <stdio.h>

/** type definitions **/
typedef enum {
    NUMBER = 1,
    PLUS,
    MINUS,
    TIMES,
    DIVIDED_BY,
    LPAREN,
    RPAREN
} token_type;

typedef struct {
    token_type type;
    float value;
} token;

typedef enum {
    false, true
} boolean;

/** global variables **/
boolean Eoln;                   /* true if end of line has been reached */
boolean Err;                    /* true if error was encounted during parsing */

//boolean         Unget;         /* true if getc() should return the last char */
//char            Last;          /* last character fetched */
char *Buffer;                   /* the character buffer */

/** prototypes **/
float parse_expr(char *s);

float expr(void);
float expr2(void);
float term(void);
float term2(void);
float factor(void);
void get_token(token * t);
char get(void);
void unget(void);

/* test routine for expression parser */
int main(int argc, char *argv[])
{
    float result;
    char s[100];

    for (;;) {
        printf ("enter an expression: ");
        scanf ("%s", s);

        result = parse_expr (s);
        if (!Err)
            printf("result = %g\n\n", result);
        else
            printf("bad expression\n\n");
    }
}

/* parse_expr() is the main routine for the parser */
/* it expects a C string (null-terminated) as its argument */
float parse_expr(char *s)
{
    // Eoln = Err = Unget = false;
    Eoln = Err = false;
    Buffer = s;

    return (expr());
}

float expr(void)
{
    return (term() + expr2());
}

float term(void)
{
    return (factor() * term2());
}

float expr2(void)
{
    token t;

    get_token(&t);

    if (t.type == PLUS)
        return (term() + expr2());
    else if (t.type == MINUS)
        return (-(term() + expr2()));
    else {
        unget();
        return 0;
    }
}

float term2 (void)
{
    token t;

    get_token(&t);

    if (t.type == TIMES)
        return (factor () * term2 ());
    else if (t.type == DIVIDED_BY)
        return (1 / (factor() / term2 ()));
    else {
        unget();
        return (1);
    }
}

float factor(void)
{
    float e;
    token t;

    get_token(&t);

    if (Eoln)
        Err = true;
    else if (t.type == LPAREN) {
        e = expr ();

        get_token(&t);
        if (t.type == RPAREN)
            return (e);
        else {
            Err = true;
            return (0);
        }
    } else if (t.type == MINUS)
        return (-factor ());
    else if (t.type == NUMBER)
        return (t.value);
    else {
        Err = true;
        return (0);
    }
}

/* get_token() is the lexical analyzer */
/* it returns the next token in the input stream */
/* it sets the Eoln flag if the end of the line is reached */
void get_token(token * t)
{
    register char c;

    while ((c = get()) == ' '); /* ignore spaces */

    switch (c) {
    case '\0':
        Eoln = true;            /* we've reached the end of the line */
        break;
    case '+':
        t->type = PLUS;
        break;
    case '-':
        t->type = MINUS;
        break;
    case '*':
        t->type = TIMES;
        break;
    case '/':
        t->type = DIVIDED_BY;
        break;
    case '(':
        t->type = LPAREN;
        break;
    case ')':
        t->type = RPAREN;
        break;
    default:
        if (c >= '0' && c <= '9' || c == '.') {
            float value;
            float dec;

            if (c == '.') {
                value = 0;
                dec = 10;
            } else {
                value = c - '0';
                dec = 0;
            }

            while ((c = get ()) >= '0' && c <= '9' || c == '.') {
                if (c == '.') {
                    if (dec == 0)
                        dec = 10;
                    else {
                        Err = true;
                        break;
                    }
                } else if (dec == 0) {
                    value *= 10;
                    value += (c - '0');
                } else {
                    value += (c - '0') / dec;
                    dec *= 10;
                }
            }

            unget();           /* unget the last character read */

            t->value = value;
            t->type = NUMBER;
        } else
            Err = true;         /* bad character in input */
        break;
    }
}

char get(void)
{
//    if (Unget)
//        Unget = false;
//    else
//        Last = *Buffer++;
//    return (Last);
    return *Buffer++;
}

void unget(void)
{
//    Unget = true;
    Buffer--;
}
