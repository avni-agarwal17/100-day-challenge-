//Check if one string is a rotation of another.

#include <stdio.h>

int main()
{
    char a[100], b[100], c[200];
    int i, j, n = 0, m = 0;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    // Find length of first string
    for(i = 0; a[i] != '\0'; i++)
    {
        n++;
    }

    // Find length of second string
    for(i = 0; b[i] != '\0'; i++)
    {
        m++;
    }

    // If lengths are different
    if(n != m)
    {
        printf("Not a rotation");
        return 0;
    }

    // Put first string two times in c
    for(i = 0; i < n; i++)
    {
        c[i] = a[i];
        c[i + n] = a[i];
    }

    c[2 * n] = '\0';

    // Check if b is present in c
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(c[i + j] != b[j])
            {
                break;
            }
        }

        if(j == n)
        {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not a rotation");

    return 0;
}