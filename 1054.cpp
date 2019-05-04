#include<stdio.h>
int main()
{
    int n;
    double s=0,i=0;
    while(scanf("%d",&n)!=EOF){
        if(n<0)
            break;
        else
            s+=n;
            i++;
    }
    printf("%.2lf\n",s/i);
    return 0;
}
