#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, k;
    int small, column;
    int flag;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        small = a[i][0];
        column = 0;

        for(j=1; j<c; j++)
        {
            if(a[i][j] < small)
            {
                small = a[i][j];
                column = j;
            }
        }

        flag = 1;

        for(k=0; k<r; k++)
        {
            if(a[k][column] > small)
            {
                flag = 0;
            }
        }

        if(flag == 1)
        {
            printf("Saddle Point = %d", small);
            return 0;
        }
    }

    printf("No Saddle Point");

    return 0;
}
