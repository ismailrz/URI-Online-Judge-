#include<stdio.h>
int main()
{
    int M,N,T,i,S=0;
    while(scanf("%d%d",&M,&N)!=EOF){
        if(M<=0 || N<=0)
            return 0;
       else if(M>N){
            T=M;
            M=N;
            N=T;
        }
        for(i=M;i<=N;i++){
            S+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",S);
        S=0;
    }
    return 0;
}
