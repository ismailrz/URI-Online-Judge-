#include<stdio.h>
int main()
{
    int X,y=0,i,m=0;;
    scanf("%d",&X);
    for(i=X;i>=365;i-=365){
        y++;
    }
    X=X-y*365;
    for(i=X;i>=30;i-=30){
        m++;
    }
    X=X-m*30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",X);
    return 0;
}


