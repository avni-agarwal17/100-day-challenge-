#include <stdio.h>

int main()
{
    int a[20], n, i, j;
    int left, right;
    int found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        left = 0;
        right = 0;

        for(j=0; j<i; j++)
        {
            left = left + a[j];
        }

        for(j=i+1; j<n; j++)
        {
            right = right + a[j];
        }

        if(left == right)
        {
            printf("Equilibrium index = %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}