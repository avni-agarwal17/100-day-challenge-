#include <stdio.h>

int main() {
    int a, b;
    printf("enter 1st no.:");
    scanf("%d", &a);
    printf("enter 2nd no.:");
    scanf("%d", &b);

    printf("Sum=%d\n",a + b);
    printf("diff=%d\n",a - b);
    printf("product=%d\n",a * b);

    if (b!=0)
    printf("quotient=%d\n",a / b); 
    else
    printf("quotient=not determined\n"); 

    return 0;
}