//Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int space = 0, digit = 0, special = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            space++;

        else if(str[i] >= '0' && str[i] <= '9')
            digit++;

        else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // it is an alphabet
        }

        else
            special++;
    }

    printf("Spaces = %d\n", space);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d", special);

    return 0;
}