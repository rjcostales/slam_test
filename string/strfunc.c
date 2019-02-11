#include <string.h>
#include <ctype.h>

char * rtrim(char * s)
{
    for (int i = strlen(s) - 1; isspace(s[i]); i--)
        s[i] = '\0';
    return s;
}

char * ltrim(char * s)
{
    char * t;

    for (t = &s[0]; isspace(*t); t++);
    memcpy(s, t, strlen(t) + 1);
    return s;
}

char * trim(char * s)
{
    return rtrim(ltrim(s));
}

char * lower(char * s)
{
    for (char * p = &s[0]; *p != '\0'; p++)
        *p = tolower(*p);
    return s;
}

char * upper(char * s)
{
    for (char * p = &s[0]; *p != '\0'; p++)
        *p = toupper(*p);
    return s;
}
