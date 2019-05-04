#include<stdio.h>
int main()
{
    double a,b,S,M;
    scanf("%lf%lf",&a,&b);
    S=b-a;
    M=(S*100)/a;
    printf("%.2lf%%\n",M);
    return 0;
}

