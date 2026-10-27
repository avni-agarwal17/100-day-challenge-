//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("data.txt", "a");

    if(file == NULL)
    {
        printf("File cannot be opened");
        return 0;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(file, "\n%s", text);

    fclose(file);

    printf("File updated successfully with appended text.");

    return 0;
}