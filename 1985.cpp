#include<stdio.h>
int main()
{
    int T,N,P;
    double S=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&P,&N);
        if(P==1001)
            S+=N*1.5;
        else if(P==1002)
            S+=N*2.5;
        else if(P==1003)
            S+=N*3.5;
        else if(P==1004)
            S+=N*4.5;
        else if(P==1005)
            S+=N*5.5;
    }
    printf("%.2lf\n",S);
    return 0;
}
