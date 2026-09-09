#include <stdio.h>

int main() {
    for(int i = 5; i >= 1; i--) {

        for(int a = 1; a <= 5 - i; a++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}