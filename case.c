#include <stdio.h>

int main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if(a >= 'A' && a <= 'Z')
        printf("Uppercase alphabet");
    else if(a >= 'a' && a <= 'z')
        printf("Lowercase alphabet");
    else if(a >= '0' && a <= '9')
        printf("Digit");
    else
        printf("Special character");

    return 0;
}