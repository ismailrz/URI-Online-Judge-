#include<stdio.h>
int main()
{
    double n,S,M,N,P;
    scanf("%lf",&n);
    if(n<=2000){
        printf("Isento\n");
    }
    else if(n<=3000){
        S=n-2000;
        S=S*.08;
        printf("R$ %.2lf\n",S);
    }
    else if(n<=4500){
        S=n-2000;
        M=(S-1000);
        M=M*.18;
        N=1000*.08;
        printf("R$ %.2lf\n",M+N);
    }
    else if(n>4500){
        S=n-2000;
        M=(S-2500);
        M=M*.28;
        N=1000*.08;
        P=1500*.18;
        printf("R$ %.2lf\n",M+N+P);
    }

    return 0;
}


