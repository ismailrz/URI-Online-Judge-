#include<stdio.h>
int main()
{
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,p1=0,p2=0,p3=0,p4=0,p5=0;
    double X,i;
    scanf("%lf",&X);
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
    X=X-c7;
    for(i=X;i>=.50;i-=.50){
        p1++;
    }
    X=X-p1*.50;
    for(i=X;i>=.25;i-=.25){
        p2++;
    }
    X=X-p2*.25;
    for(i=X;i>=.10;i-=.10){
        p3++;
    }
    X=X-p3*.10;
    for(i=X;i>=.05;i-=.05){
        p4++;
    }
    X=X-p4*.05;
    for(i=X;i>=.01;i-=.01){
        p5++;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",c1);
    printf("%d nota(s) de R$ 50.00\n",c2);
    printf("%d nota(s) de R$ 20.00\n",c3);
    printf("%d nota(s) de R$ 10.00\n",c4);
    printf("%d nota(s) de R$ 5.00\n",c5);
    printf("%d nota(s) de R$ 2.00\n",c6);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c7);
    printf("%d moeda(s) de R$ 0.50\n",p1);
    printf("%d moeda(s) de R$ 0.25\n",p2);
    printf("%d moeda(s) de R$ 0.10\n",p3);
    printf("%d moeda(s) de R$ 0.05\n",p4);
    printf("%d moeda(s) de R$ 0.01\n",p5);
    return 0;
}

