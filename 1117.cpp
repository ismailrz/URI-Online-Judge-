#include<stdio.h>
int main()
{
    int i=0;
    double S=0,N;
    while(scanf("%lf",&N)!=EOF){
        if(N<=10){
                if(N>=0){
                    S+=N;
                    i++;
                    if(i==2)
                        goto T;
                }
        else
            printf("nota invalida\n");
        }
        else
            printf("nota invalida\n");
    }
    T:
       printf("media = %.2lf\n",S);
    return 0;
}
