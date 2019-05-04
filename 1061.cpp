#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,d1,d2,D,M,H,S,st1,st2,W;
    printf("Dia ");
    scanf("%d",&d1);
    scanf("%d : %d : %d",&a,&b,&c);
    printf("Dia ");
    scanf("%d",&d2);
    scanf("%d : %d : %d",&x,&y,&z);
    st1=d1*86400+a*3600+b*60+c;
    st2=d2*86400+x*3600+y*60+z;
    W=st2-st1;
    if(W>=60){
        D=W/86400;
        H=(W%86400)/3600;
        M=((W%86400)%3600)/60;
        S=((W%86400)%3600)%60;
    }
    printf("%d dia(s)\n",D);
    printf("%d hora(s)\n",H);
    printf("%d minuto(s)\n",M);
    printf("%d segundo(s)\n",S);
    return 0;
}
