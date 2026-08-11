//write program to calculate the area and circumference of given circle given its radius . 

#include<stdio.h>
int main() {
    int radius=8;
    float pi=3.14;
    float circumference,area;
    printf("radius of circle is=%d\n",radius);
    circumference= 2*pi*radius;
    area=pi*radius*radius;
    printf("radius of circle is=%.2f\n",circumference);
    printf("area of circle is=%.2f\n",area);
    return 0;
}