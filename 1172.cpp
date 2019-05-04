#include<stdio.h>
int main()
{
    int A[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++){
        if(A[i]>0)
            printf("X[%d] = %d\n",i,A[i]);
        else
            printf("X[%d] = 1\n",i);
    }

    return 0;
}
