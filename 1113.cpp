#include<stdio.h>
int main()
{
    int M,N;
    while(scanf("%d%d",&M,&N)!=EOF){
        if(M==N)
            return 0;
        else if(M>N)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}

