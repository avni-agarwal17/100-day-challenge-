//Q15 write a program to input character and find if its digit ,uppercase,lowercase,whitespace or special character
#include<stdio.h>
int main() {
    char character;
    printf("Enter your character=:");
    scanf("%c", &character);
    if (character>='A' && character<='Z'){
        printf("Character is uppercase");
    }
    else if(character>='a' && character<='z'){
        printf("Character is lowercase");
    }
    else if(character>=0 && character<=9) {
        printf("Character is a digit");
    }
    else if(character==' ' || character=='\n' || character=='\t') {
        printf("Character is a whitespace");
    }
     else {
        printf("Character is a whitespace");  
    }
     return 0;
} 