#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // transpose
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // reverse rows
    for(i=0; i<n; i++)
    {
        for(j=0; j<n/2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }

    printf("Rotated matrix:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}