#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int x,y,a,b,c,d;
    double S=0,m;
    scanf("%d%d",&x,&y);
    while(y--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        m=(b-a)*1440;
        S+=m*c+d;
        printf("%.5lf\n",S);
    }
    printf("%.5lf\n",S);
    return 0;
}

