#include<stdio.h>
int main()
{
    int n;
    double a,b,c,av;
    scanf("%d",&n);
    while(n--){
        scanf("%lf%lf%lf",&a,&b,&c);
        av=(a*2+b*3+c*5)/10;
        printf("%.1lf\n",av);
    }
    return 0;
}
