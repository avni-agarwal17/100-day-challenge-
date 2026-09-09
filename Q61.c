#include <stdio.h>

int main()
{
    int a[20], n, i, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}