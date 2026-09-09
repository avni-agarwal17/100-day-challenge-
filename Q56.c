#include <stdio.h>

int main() {
    int a, b;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    
    int arr[a];
    printf("Enter %d elements: ", a);
    for(b = 0; b < a; b++) {
        scanf("%d", &arr[b]);
    }
    
    printf("Array elements are: ");
    for(b = 0; b < a; b++) {
        printf("%d ", arr[b]);
    }
    printf("\n");
    
    return 0;
}