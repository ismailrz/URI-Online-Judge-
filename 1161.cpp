#include<stdio.h>
int main()
{
    int a,b,i;
    long long f1=1,f2=1;
    while(scanf("%d%d",&a,&b)!=EOF){
            for(i=1;i<=a;i++)
                f1*=i;
            for(i=1;i<=b;i++)
                f2*=i;
            printf("%llu\n",f1+f2);
            f1=1;f2=1;
    }
    return 0;
}

