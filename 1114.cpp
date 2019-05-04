#include<stdio.h>
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF){
         if(N==2002){
            printf("Acesso Permitido\n");
            return 0;
         }
        else
            printf("Senha Invalida\n");
    }
    return 0;
}


