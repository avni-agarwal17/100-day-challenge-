#include <stdio.h>

int main() {
    int a, b, sum = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &a);
    
    int arr[a];
    
    printf("Enter elements: ");
    for(b = 0; b < a; b++) {
        scanf("%d", &arr[b]);
        sum += arr[b];
    }
    
    printf("Sum of elements = %d\n", sum);
    
    return 0;
}