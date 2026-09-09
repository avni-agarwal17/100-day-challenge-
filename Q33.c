#include <stdio.h>

int main()
{
    int n, x, r, sum = 0;

    scanf("%d", &n);

    x = n;

    while(n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }

    if(x == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}