#include<stdio.h>
int main()
{
    int  A=0,B=0,C=0,N;
    T:
    while(scanf("%d",&N)!=EOF){
        if(N==1)A++;
        else if(N==2)B++;
        else if(N==3)C++;
        else if(N==4)break;
        else
            goto T;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",A);
    printf("Gasolina: %d\n",B);
    printf("Diesel: %d\n",C);
    return 0;
}

