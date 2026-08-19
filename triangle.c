//Q19 write a program to find if a triangle is eqilateral,scalene or isosceles based on its sides
#include<stdio.h>

int main(){
    int a=15;
    float b=23.5;
    char c='b';

    if ( a==b && b==c){
        printf("Isoceles Triangle");
    }
    else if(a==b || b==c || a==c){
        printf("Equilateral Triangle");
    
    }
    else{ 
        printf("scalene Triangle");

    }
    return 0;
} 
    
