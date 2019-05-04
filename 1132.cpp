#include<stdio.h>
int main()
{
    int i,t,x,y,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        t=x;
        x=y;
        y=t;
    }
    for(i=x;i<=y;i++){
        if(i%13)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
