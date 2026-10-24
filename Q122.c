//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main()
{
    FILE *fp;
    char data[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    fread(data, sizeof(char), 100, fp);

    printf("%s", data);

    fclose(fp);

    return 0;
}