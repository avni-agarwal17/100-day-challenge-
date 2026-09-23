#include<stdio.h>
#include<stdlib.h>
int main () {
   
    int a,b,c,d;
    int num,orig;
    int diff;
    int asc, desc;
    int repeat=0;
    printf("enter no.");
    scanf("%d" , &orig);
    if(orig<1000 || orig>9999)
{
   printf("invalid");
   return 0;
}
 while(orig!=6174)
{
    num=orig;

    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;

    if (a==b && b==c && c==d && a==d)
{
    printf("invalid");
    return 0;
}

if (a>b)
{
    num=a;
    a=b;
    b=num;
}

if (a>c)
{
    num=a;
    a=c;
    c=num;
}

if (a>d)
{
    num=a;
    a=d;
    d=num;
}

if (b>c)
{
    num=b;
    b=c;
    c=num;
}

if (b>d)
{
    num=b;
    b=d;
    d=num;
}

if (c>d)
{
    num=c;
    c=d;
    d=num;
}

asc=a*1000+b*100+c*10+d*1;
desc=d*1000+c*100+b*10+a*1;
diff=abs(desc-asc);

orig=diff;
repeat++;

printf("repeat=%d\n",repeat);
printf("asc=%d\n",asc);
printf("desc=%d\n",desc);
printf("diff=%d\n",diff);
}
return 0;

}

