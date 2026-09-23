#include <stdio.h>
int main() {
    int m=50;
    int n=100;
    int l=75;
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