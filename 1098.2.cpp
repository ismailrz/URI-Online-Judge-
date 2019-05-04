#include<stdio.h>
int main()
{
    int i;
    float a=1,b=2,c=3,x=0;
    for(i=0;i<=10;i++){
        if(i==0 || i==5 || i==10){
            printf("I=%.f J=%.f\n",x,a);
            printf("I=%.f J=%.f\n",x,b);
            printf("I=%.f J=%.f\n",x,c);
        }
        else{
            printf("I=%.1f J=%.1f\n",x,a);
            printf("I=%.1f J=%.1f\n",x,b);
            printf("I=%.1f J=%.1f\n",x,c);
        }
        a+=.2;b+=.2;c+=.2;x+=.2;
    }
    return 0;
}
