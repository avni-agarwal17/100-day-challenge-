#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int sum, row, col;
    int d1=0, d2=0;
    int flag=1;

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

    sum = 0;

    for(j=0; j<n; j++)
    {
        sum = sum + a[0][j];
    }

    for(i=0; i<n; i++)
    {
        row = 0;
        col = 0;

        for(j=0; j<n; j++)
        {
            row = row + a[i][j];
            col = col + a[j][i];
        }

        if(row != sum || col != sum)
        {
            flag = 0;
        }
    }

    for(i=0; i<n; i++)
    {
        d1 = d1 + a[i][i];
        d2 = d2 + a[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
    {
        flag = 0;
    }

    if(flag == 1)
    {
        printf("Yes, it is a Magic Square");
    }
    else
    {
        printf("Not a Magic Square");
    }

    return 0;
}
