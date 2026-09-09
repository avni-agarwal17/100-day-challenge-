#include <stdio.h>

int main()
{
    int unit, bill;

    scanf("%d", &unit);

    if(unit <= 100)
    {
        bill = unit * 5;
    }
    else if(unit <= 200)
    {
        bill = 500 + (unit - 100) * 7;
    }
    else if(unit <= 300)
    {
        bill = 1200 + (unit - 200) * 10;
    }
    else
    {
        bill = 2200 + (unit - 300) * 12;
    }

    printf("Bill: ₹%d", bill);

    return 0;
}

