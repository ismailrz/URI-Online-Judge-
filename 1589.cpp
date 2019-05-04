#include<stdio.h>
int main()
{
    long long x,y;
    int B;
    scanf("%d",&B);
    while(B--)
    {
        scanf("%lld%lld",&x,&y);
        printf("%lld\n",x+y);
    }
    return 0;
}
