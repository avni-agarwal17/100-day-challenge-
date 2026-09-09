#include <stdio.h>

int main() {
    int x, y = 0;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    for(int i = 1; i < x; i++) {
        if(x % i == 0) {
            y += i;
        }
    }
    
    if(y == x) {
        printf("%d is a perfect number.\n", x);
    } else {
        printf("%d is not a perfect number.\n", x);
    }
    
    return 0;
}