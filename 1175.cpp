#include<stdio.h>
int main()
{
    int N[20],i,j=0;
    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }
    for(i=19;i>=0;i--,j++){
        printf("N[%d] = %d\n",j,N[i]);
    }

    return 0;
}
