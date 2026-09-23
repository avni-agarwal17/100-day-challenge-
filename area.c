#include <stdio.h>

int main() {
    int breadth;
    int area;
    int length,perimeter;

    printf("breadth of rec");
    scanf("%d",&breadth);

    printf("area of rec ");
    scanf("%d",&area);

    length= area/breadth;
    perimeter = 2*(length+breadth);
    
    printf("perimeter of rec = %d\n",perimeter);
    printf("length of rec = %d\n",length);

   return 0;
}
