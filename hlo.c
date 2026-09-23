#include <stdio.h>
int main() {
    int n=5;
    int arr[]={12,35,1,10,34}, i;
    for (i=0; i<n; i++){
        if (arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
        }
    }
    printf("%d", arr[i-3]);
    return 0;
}
