#include<stdio.h>
int main()
{
    int A,N,i,S=0;
    scanf("%d%d",&A,&N);
    if(N<=0){
        z:
        scanf("%d",&N);
        if(N<=0)
            goto z;
    }
    for(i=0;i<N;i++){
        S+=A;
        A++;
    }
    printf("%d\n",S);
    return 0;
}
