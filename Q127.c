//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char ch;

    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");

    while((ch = fgetc(f1)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);

    printf("Done");

    return 0;
}