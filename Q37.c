#include <stdio.h>

int main() {
    int num1, num2, a, b, x, y, lcm;

    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        x = b;
        b = a % b;
        a = x;
    }
    y = a;

    lcm = (num1 * num2) / y;

    printf("%d\n", lcm);

    return 0;
}