#include<stdio.h>
int main()
{
    int i,E=0,O=0,P=0,N=0,A;
    for(i=1;i<=5;i++){
        scanf("%d",&A);
        if(A%2==0)
            E++;
        else
            O++;
        if(A>0)
            P++;
        else if(A<0)
            N++;
    }
    printf("%d valor(es) par(es)\n",E);
    printf("%d valor(es) impar(es)\n",O);
    printf("%d valor(es) positivo(s\n",P);
    printf("%d valor(es) negativo(s)\n",N);
    return 0;
}
