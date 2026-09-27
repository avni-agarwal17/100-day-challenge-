//Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main()
{
    char str[100], temp;
    int i = 0, start, end, j;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while(str[i] != '\0')
    {
        start = i;

        // Find end of the word
        while(str[i] != ' ' && str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        // Reverse the word
        for(j = start; j < end; j++)
        {
            temp = str[j];
            str[j] = str[end];
            str[end] = temp;
            end--;
        }

        if(str[i] == ' ')
        {
            i++;
        }
    }

    printf("%s", str);

    return 0;
}