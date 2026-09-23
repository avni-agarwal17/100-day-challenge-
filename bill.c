[12:01 pm, 22/08/2026] AVNI AGARWAL: #include <stdio.h>

int main()
{
    int unit, bill;

    printf("Enter units: ");
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
        bill = 500 + 700 + (unit - 200) * 10;
    }
    else
    {
        bill = 500 + 700 + 1000 + (unit - 300) * 12;
    }

    printf("Bill: Rs.%d", bill);

    return 0;
}

