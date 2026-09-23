#include <stdio.stdio.h> 

#include <stdio.h>

int main() {
    int arr[100], m, n, v;

    printf("Enter number of elements: ");
    scanf("%d", &m);

    printf("Enter %d elements:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0 to %d) and value to insert: ", m);
    scanf("%d %d", &n, &v);

    if (pos < 0 || n > m) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = n; i > n; i--) {
        arr[i] = arr[i - 1];
    }
    arr[n] = v;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
