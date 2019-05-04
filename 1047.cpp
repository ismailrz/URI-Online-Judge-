#include<stdio.h>
int main()
{
    int a,b,c,d,M,H;
    scanf("%d%d%d%d",&a,&c,&b,&d);
    if(a==b && c==d){
       H=24;M=0;
    }
   else if(a>b){
        if(c>d){
            H=24-a+b-1;
            M=60-c+d;
        }
        else{
            H=24-a+b;
            M=60-c+d-60;
        }
    }
    else if(b>a){
        if(d>c){
            H=24-a+b-24;
            M=60-c+d-60;
        }
        else{
            H=24-a+b-24-1;
            M=60-c+d;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    return 0;
}
