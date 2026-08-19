//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>

int main(){
     float P,r,t;
     float SI,CI;

     printf("enter principle value=");
     scanf("%f", &P);
     printf("enter rate value=");
     scanf("%f", &r);
     printf("enter time value=");
     scanf("%f", &t);

     SI=(P*r*t)/100;
     CI=P*pow(1+r/100,t)-P;

     printf("Simple Interest is=%2f\n",SI);
     printf("Compound Interest is=%2f\n",CI);
     return 0;
}


