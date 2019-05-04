#include<stdio.h>
int main()
{
    int  A,B,i,N;
    double G1,G2;
    scanf("%d",&N);
    while(N--){
        scanf("%d%d%lf%lf",&A,&B,&G1,&G2);
        for(i=0;A<=B && i<=100;i++){
            A+=A*G1*.01;
            B+=B*G2*.01;
        }
        if(i>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",i);
        }
    return 0;
}
