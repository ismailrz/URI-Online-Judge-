#include<stdio.h>
int main()
{
    long long T;
    int N;
    scanf("%d",&N);
    while(N--){
        scanf("%lld",&T);
        if(T>2014)
            printf("%lld A.C.\n",T-2014);
        else
            printf("%lld D.C.\n",2015-T);
    }
    return 0;
}
