#include<stdio.h>
int main()
{
    float i,a=1,b=2,c=3;
    for(i=0;i<=1.8;i+=.2){
        if(i==0 || i==1){
            printf("I=%.f J=%.f\n",i,a);
            printf("I=%.f J=%.f\n",i,b);
            printf("I=%.f J=%.f\n",i,c);
        }
        else if(i==2){
            printf("I=%d J=%d\n",i,a);
            printf("I=%d J=%d\n",i,b);
            printf("I=%d J=%d\n",i,c);
        }

        else{
            printf("I=%.1lf J=%.1lf\n",i,a);
            printf("I=%.1lf J=%.1lf\n",i,b);
            printf("I=%.1lf J=%.1lf\n",i,c);
        }
         a+=.2;b+=.2;c+=.2;
    }
        i=2;a=3;b=4;c=5;
        printf("I=%.lf J=%.lf\n",i,a);
        printf("I=%.lf J=%.lf\n",i,b);
        printf("I=%.lf J=%.lf\n",i,c);
    return 0;
}


