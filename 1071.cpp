#include<stdio.h>
int main()
{
    int X,Y,i,T,sum=0;
    scanf("%d%d",&X,&Y);
        if(X>Y){
            T=X;
            X=Y;
            Y=T;
        }
    for(i=X+1;i<Y;i++){
        if(i%2!=0)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
