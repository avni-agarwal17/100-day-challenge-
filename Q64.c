#include <stdio.h>

int main()
{
    int x, y;
    int a[10] = {0};
    int i, max = 0, ans = 0;

    scanf("%d", &x);

    while(x > 0)
    {
        y = x % 10;
        a[y]++;
        x = x / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}