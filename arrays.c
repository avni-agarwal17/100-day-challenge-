//array 

#include<stdio.h>
int main()
{
    int runs[11];
    int i , sum=0;
    printf("runs scored=");
    for(i=0;i<11;i++){
    scanf("%d",&runs[i]);
    }
    for(i=0;i<11;i++){
    sum=sum+runs[i];   
    if(runs[i]==0)
        printf("player %d: OUT FOR DUCK!\n",i+1);
    else if(runs[i]>0 && runs[i]<30)
        printf("player %d: Scored %d runs - a decent contribution\n",i+1,runs[i]);
     else if(runs[i]>=30 && runs[i]<50)
        printf("player %d: Solid knock of %d runs\n",i+1,runs[i]);
    else if(runs[i]>=50 && runs[i]<100)
        printf("player %d: HALF-CENTURY %d runs\n",i+1,runs[i]);
    else if(runs[i]>=100)
        printf("player %d: CENTURY!! what an innings-runs %d \n",i+1,runs[i]);
        
    }
        printf("\n===========MATCH SUMMARY==========\n");
        printf("total team scored =%d\n", sum);
        return 0;
}