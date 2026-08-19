//Q16 write a program to input three numbers and find the largest
#include <stdio.h>
int main() {
    int m;
    int n;
    int l;
     printf("Dear user enter your first number:");
    scanf("%d",&m);
     printf("Dear user enter your second number:");
    scanf("%d",&n);
    printf("Dear user enter your third number:");
    scanf("%d",&l);

    if (m>=n && m>=l){
        printf("m is largest",m);
    }
    else if(n>=m && n>=l){
        printf("n is largest" ,n);
    }
    else {
        printf("l is largest" ,l);
    }
     return 0;
} 