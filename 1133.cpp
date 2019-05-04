#include<stdio.h>
int main()
{
    int i,t,x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        t=x;
        x=y;
        y=t;
    }
    for(i=x+1;i<y;i++){
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }
    return 0;
}
