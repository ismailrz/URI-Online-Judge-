#include<stdio.h>
int main()
{
    int M,N,T;
    double S;
        scanf("%d",&T);
    while(T--){
        scanf("%d%d",&M,&N);
        S=(double)M/(double)N;
        if(N==0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n",S);
    }
    return 0;
}


