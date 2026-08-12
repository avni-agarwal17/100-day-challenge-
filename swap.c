//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("enter 1st no.:");
    scanf("%d", &a);
    printf("enter 2nd no.:");
    scanf("%d", &b);

     c=a;
     a=b;
     b=c;
     
     printf("on swaping : a=%d , b=%d",a,b);

     return 0;
}

