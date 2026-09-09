#include <stdio.h>

int main()
{
    int n, i;
    int p = 1;

    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2)
    {
        p = p * i;
    }

    printf("%d", p);

    return 0;
}