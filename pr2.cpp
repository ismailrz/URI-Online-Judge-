#include<stdio.h>
int main()
{
    int i,sum=0,n=6,b,m=00056;

    for(i=0;i<n;i++){
        b=m%10;
        sum+=b;
        m=m/10;
    }
    printf("%d",sum);
    return 0;
}

