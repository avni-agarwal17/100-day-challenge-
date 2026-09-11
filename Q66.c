#include <stdio.h>

int main()
{
    int a[100], m, n, i;

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);

    for(i = m - 1; i >= 0; i--)
    {
        if(a[i] > n)
            a[i + 1] = a[i];
        else
            break;
    }

    a[i + 1] = n;
    n++;

    for(i = 0; i < m; i++)
        printf("%d ", a[i]);

    return 0;