#include<stdio.h>
int main()
{
    int X,S,m,M,h;
    scanf("%d",&X);
    h=X/3600;
    S=X%60;
    m=X/60;
    M=m%60;
    printf("%d:%d:%d\n",h,M,S);
    return 0;
}

