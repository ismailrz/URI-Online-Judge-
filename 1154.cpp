#include<stdio.h>
int main()
{
    int N,i=0;
    double S=0;
    while(scanf("%d",&N)!=EOF && N>0){
        S+=N;
        i++;
    }
    printf("%.2lf\n",S/i);
    return 0;
}
