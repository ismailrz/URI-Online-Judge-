#include<stdio.h>
int main()
{
    int T,i;
    double P,N,A[100],B[100],C[100];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lf%lf",&P,&N);
        A[i]=P;
        B[i]=N;
        C[i]=N;
    }
    for(i=0;i<T;i++){
        if(B[i]>B[i+1]){
            B[i+1]=B[i];
        }
    }
    if(B[T-1]<=8)
        printf("Minimum note not reached\n");
    else{
        for(i=0;i<T;i++){
            if(B[T-1]==C[i])
                printf("%.lf\n",A[i]);
        }
    }
    return 0;
}

