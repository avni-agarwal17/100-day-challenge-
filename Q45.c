#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;
    float a = 2, b = 3;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + a / b;

        a = a + 2;
        b = b + 4;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}