#include<stdio.h>
int main()
{
    int N,i;
    double sum=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum*=i;
    }
    printf("%.lf\n",sum);
    return 0;
}
