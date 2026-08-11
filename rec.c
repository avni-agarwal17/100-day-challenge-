//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>

int main() {
    int a=12;
    int b=6;
    int perimeter,area;
    printf("length of rec = %d\n", a);
    printf("breadth of rec = %d\n", b);
    perimeter = 2*(a=b);
    area = a*b;
    printf("perimeter of rec = %d\n",perimeter);
    printf("area of rec = %d\n",area);

   return 0;
}