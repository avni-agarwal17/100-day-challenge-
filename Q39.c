#include <stdio.h>

int main()
{
    int x, y, z = 1;

    scanf("%d", &x);

    while(x > 0)
    {
        y = x % 10;

        if(y % 2 != 0)
            z = z * y;

        x = x / 10;
    }

    printf("%d", z);

    return 0;
}