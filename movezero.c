#include <stdio.h>

int main()
{
    int a[20], n, i, j=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    while(j<n)
    {
        a[j] = 0;
        j++;
    }

    printf("New array: ");

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}