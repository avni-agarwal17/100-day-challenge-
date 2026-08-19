//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main() {
    int a=12;
    if (a==0){
        printf("value of  a=0");
    }
    else if(a>=0){
        printf("value of a is positive");
    }
    else if(a<=0){
        printf("value of a is negative");
    }
    return 0;
}
