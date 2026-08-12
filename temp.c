//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float c;
    float f;
    printf("enter f temp to convert:");
    scanf("%f",&f);

    c=(f-32)*5/9;
    printf("temp in c : %f",c);
    return 0;
}