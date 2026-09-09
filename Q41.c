#include <stdio.h>

int main()
{
    int n, x, p = 1, ans;
    int first,last;

    scanf("%d", &n);

    last = n % 10;
    x = n;

    while(x >= 10)
    {
        x = x / 10;
        p = p * 10;
    }

    first = x;

    ans = n - first * p - last;
    ans = ans + last * p + first;

    printf("%d", ans);

    return 0;
}