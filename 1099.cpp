#include<stdio.h>
int main()
{
    int T,X,Y,tm,i,Sum=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&X,&Y);
        if(X>Y){
            tm=X;
            X=Y;
            Y=tm;
        }
        for(i=X+1;i<Y;i++){
            if(i%2)
                Sum+=i;
        }
        printf("%d\n",Sum);
        Sum=0;
    }
    return 0;
}
