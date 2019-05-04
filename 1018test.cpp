#include<stdio.h>
int main()
{
    int X,i,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0;
    scanf("%d",&X);
    printf("%d\n",X);
    for(i=X;i>=100;i-=100){
        c1++;
    }
    X=X-c1*100;
    for(i=X;i>=50;i-=50){
        c2++;
    }
    X=X-c2*50;
    for(i=X;i>=20;i-=20){
        c3++;
    }
    X=X-c3*20;
    for(i=X;i>=10;i-=10){
        c4++;
    }
    X=X-c4*10;
    for(i=X;i>=5;i-=5){
        c5++;
    }
    X=X-c5*5;
    for(i=X;i>=2;i-=2){
        c6++;
    }
    X=X-c6*2;
    for(i=X;i>=1;i-=1){
        c7++;
    }
    printf("%d nota(s) de R$ 100,00\n",c1);
    printf("%d nota(s) de R$ 50,00\n",c2);
    printf("%d nota(s) de R$ 20,00\n",c3);
    printf("%d nota(s) de R$ 10,00\n",c4);
    printf("%d nota(s) de R$ 5,00\n",c5);
    printf("%d nota(s) de R$ 2,00\n",c6);
    printf("%d nota(s) de R$ 1,00\n",c7);
    return 0;
}

