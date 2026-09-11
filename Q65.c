#include <stdio.h>

int main()
{
    int a[100], n, i, x;
    int u, d, mid;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    u = 0;
    high = n - 1;

    while(u <= d)
    {
        mid = (u + d) / 2;

        if(a[mid] == x)
        {
            printf("Found at index %d", mid);
            return 0;
        }

        if(x > a[mid])
            u = mid + 1;
        else
            d = mid - 1;
    }

    printf("-1");

    return 0;
}