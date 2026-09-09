#include <stdio.h>

int main() {
    int num1, num2, a, b, x, hcf;

    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        x = b;
        b = a % b;
        a = x;
    }

    hcf = a;

    printf("%d\n", hcf);

    return 0;
}