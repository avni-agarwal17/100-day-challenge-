#include <stdio.h>

int main()
{
    int a[20], b[20];
    int x, y, i;

    scanf("%d", &x);

    for(i = 0; i < x; i++)
        scanf("%d", &a[i]);

    scanf("%d", &y);

    for(i = 0; i < y; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < x; i++)
        printf("%d ", a[i]);

    for(i = 0; i < y; i++)
        printf("%d ", b[i]);

    return 0;
}