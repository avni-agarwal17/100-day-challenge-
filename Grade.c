//Q18 write a program to accept a percentage and grade them
#include <stdio.h>
int main() {
    int marks;
    printf("enter percentage=");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100){
        printf("grade is A");
    }
    else if(marks>=80 && marks<=89){
        printf("Grade is B");
    }
    else if(marks>=70 && marks<=79) {
        printf("Grade is C");
    }
    else if(marks>=60 && marks<=69) {
        printf("Grade is D");
    }
     else if(marks>=60) {
        printf("Fail");  
    }
     return 0;
} 