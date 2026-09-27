//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    // Find last space
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            last = i;
        }
    }

    // First initial
    printf("%c. ", name[0]);

    // Other initials
    for(i = 0; i < last; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c. ", name[i + 1]);
        }
    }

    // Full surname
    for(i = last + 1; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}