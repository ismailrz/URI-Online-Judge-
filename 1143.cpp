#include<stdio.h>
int main()
{
    long int i,j,k=1,x;
    scanf("%ld",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=3;j++){
            printf("%ld",i*k);
            if(j==3)
                continue;
            printf(" ");
            k*=i;
        }
    k=1;
    printf("\n");
    }
    return 0;
}


