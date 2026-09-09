#include <stdio.h>

int main() {
    int n, rem, bin = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        rem = temp % 2;
        bin = bin + rem * place;
        place *= 10;
        temp /= 2;
    }

    printf("Bin = %d\n", bin);
    return 0;
}