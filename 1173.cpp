#include<stdio.h>
int main()
{
    int A[10],i,n;
    scanf("%d",&n);
    for(i=0;i<10;i++,n*=2){
        printf("N[%d] = %d\n",i,n);
    }
    return 0;
}

