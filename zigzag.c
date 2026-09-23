#include <stdio.h>

int main()
{
    int a[20], n, i, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        if(i%2==0)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        else
        {
            if(a[i] < a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    printf("Zig Zag array: ");

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
