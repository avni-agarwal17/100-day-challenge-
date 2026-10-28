//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[50], destinationName[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");
    destination = fopen(destinationName, "w");

    if(source == NULL)
    {
        printf("Source file does not exist.");
        return 0;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully to %s", destinationName);

    fclose(source);
    fclose(destination);

    return 0;
}