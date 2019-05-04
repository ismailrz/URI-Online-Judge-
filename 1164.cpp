#include<stdio.h>
int main()
{
    int N,M,i,S=0;
    scanf("%d",&N);
    T:
    while(N--){
        scanf("%d",&M);
        if(M==1)
            printf("%d nao eh perfeito\n",M);
        else if(M==3)
            printf("%d nao eh perfeito\n",M);
        else{
            for(i=1;i<=M;i++){
                S+=i;
                if(S==M){
                    printf("%d eh perfeito\n",S);
                    S=0;
                    goto T;
                }
            }
            S=0;
            printf("%d nao eh perfeito\n",M);
        }
    }
    return 0;
}
