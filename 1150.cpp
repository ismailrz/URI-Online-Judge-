#include<stdio.h>
int main()
{
    int A,N,S=0,C=0;
    scanf("%d%d",&A,&N);
    if(N<=A){
        z:
        scanf("%d",&N);
        if(N<=A)
            goto z;
    }
    while(S<N){
        S+=A;
        A++;
        C++;
    }
    printf("%d\n",C);
    return 0;
}
