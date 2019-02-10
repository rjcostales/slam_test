#include <stdio.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm* timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Current local time and date: %s", asctime(timeinfo) );
    printf("Current GMT   time and date: %s", asctime(gmtime(&rawtime)));

    time_t epoch = 0;
    printf("%ld seconds since the epoch began\n", (long) epoch);
    printf("%s", asctime(gmtime(&epoch)));

    return 0;
}
