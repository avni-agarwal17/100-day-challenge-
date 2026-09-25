//Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[100], word[100], longest[100];
    int i = 0, j = 0, k;
    int max = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;

                for(k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}