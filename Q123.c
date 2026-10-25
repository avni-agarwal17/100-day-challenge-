Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main()
{
    FILE *fp;
    char a[1000];
    int n, i;
    int characters = 0, words = 0, lines = 1;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    n = fread(a, 1, 1000, fp);

    characters = n;

    for (i = 0; i < n; i++)
    {
        if (a[i] == '\n')
            lines++;

        if (a[i] != ' ' && a[i] != '\n' &&
            (i == 0 || a[i-1] == ' ' || a[i-1] == '\n'))
        {
            words++;
        }
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}