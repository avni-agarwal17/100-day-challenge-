#include <stdio.h>

int main()
{
    int x, y, ans = 0, p = 1;

    scanf("%d", &x);

    while(x > 0)
    {
        y = x % 10;

        if(y == 0)
            y = 1;
        else
            y = 0;

        ans = ans + y * p;
        p = p * 10;
        x = x / 10;
    }

    printf("%d", ans);

    return 0;
}