//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int a, b, sum = 0;

    scanf("%d", &a);

    for (b = 1; b <= a; b++) {
        sum = sum + b;
    }

    printf("Sum=%d\n", sum);

    return 0;
}
