//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int count, max = 0;

    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        count = 0;

        for(j = i; j < strlen(s); j++)
        {
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                    break;
            }

            if(k != j)
                break;

            count++;
        }

        if(count > max)
            max = count;
    }

    printf("%d", max);

    return 0;
}