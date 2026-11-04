//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main()
{
    enum month m;
    int n;

    printf("Enter month number (1-12): ");
    scanf("%d", &n);

    m = n - 1;

    switch(m)
    {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}