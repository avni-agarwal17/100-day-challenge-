#include<stdio.h>
#include<stdlib.h>

int main(){
    char piece,colour;
    int x1,x2,y1,y2;
    int isCapture;
    int dx;
    int dy;
    int valid=0;
    printf("enter piece(k/R/B/Q/P/N=)");
    scanf(" %c",&piece);
    printf("enter colour(B/W)=");
    scanf(" %c",&colour);
    printf("enter starting position(x1,y1):");
    scanf(" %d %d",&x1,&y1);
    printf("enter ending position(x2,y2):");
    scanf(" %d %d",&x2,&y2);
    printf("enter is captured or not(0/1)=");
    scanf(" %d",&isCapture);
    dx=abs(x2-x1);
    printf("distance between x coordinates=%d\n",abs(dx));
    dy=y2-y1;
    printf("distance between y coordinates=%d\n",abs(dy));
   
    if(x1<1||x1>8||y1<1||y1>8||x2<1||x2>8||y2<1||y2>8)
    {
    printf("invalid move\n");
    return 0;
    }
    switch(piece){
        case 'K':
        case'k':
         if((abs(dx)<=1 && abs(dy)<=1 &&(dx!=0||dy!=0))
         && (isCapture==0 || isCapture==1))
            valid=1;
            break;
        case 'R':
        case 'r':
         if(((dx==0 && dy!=0 )||(dy==0 && dx!=0))
         && (isCapture==0 || isCapture==1))
            valid=1;
            break;
        case'B':
        case'b':
         if((abs(dx)==abs(dy) &&  (dx!=0))
         && (isCapture==0 || isCapture==1))
            valid=1;
            break;
        case 'Q':
        case 'q':
        if(((dx==0 && dy!=0) ||(dy==0 && dx!=0) ||(abs(dx)==abs(dy) && dx!=0))
        && (isCapture==0 || isCapture==1))
        valid=1;
        break;
        case 'P':
        case 'p': 
         if(colour=='W'|| colour=='w')
        {
            if(isCapture==0 &&  dy==1&& (dx==0))
            valid=1;
             else if((isCapture==1)&&(abs(dx)==1&&dy==1))
            valid=1;
            break;
         }
        else
        {
            if(isCapture==0 && dx==0 && dy==-1)
            valid=1;
            else if(isCapture==1 && abs(dx)==1 && dy==-1)
            valid=1;
        }
            break;

        
        case 'N':
        case 'n':
        if((abs(dx)==2 && abs(dy)==1) ||(abs(dx)==1 && abs(dy)==2))
        valid=1;
        break;
    }

        if(valid==1)
        printf("valid move\n");
        else
        printf("invalid move\n");
    
  return 0;

}
