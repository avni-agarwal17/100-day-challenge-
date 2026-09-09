#include <stdio.h>

int main()
{
    int x, temp, rem, sum = 0;
    int i, j;

    scanf("%d", &x);

    temp = x;

    while(x > 0)
    {
        rem = x % 10;

        j = 1;
        for(i = 1; i <= rem; i++)
        {
            j = j * i;
        }

        sum = sum + j;
        x = x / 10;
    }

    if(sum == temp)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}