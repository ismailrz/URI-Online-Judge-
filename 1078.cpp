#include<stdio.h>
int main()
{
    int n,i;
    double mult;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=i*n;
        printf("%d x %d = %.lf\n",i,n,mult);
    }
    return 0;
}

