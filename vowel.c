//Q 14: Write a program to input character and check if it is vowel or not

#include <stdio.h>
int main() {
    char m;
    printf("enter character=");
    scanf("%d", &m);
    if (m =='a'||m=='e'||m=='i'||m=='o'||m=='u'){
        printf("Letter is vowel");
    }
    else {
        printf("Letter is consonant");
    }
     return 0;
} 