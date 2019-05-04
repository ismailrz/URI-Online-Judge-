#include<stdio.h>
int main(){
    long long N,k;
    char A[100];
    int i=0,j;
    scanf("%lld",&N);
    while(N!=0){
        k=N%16;
        if(k<10)
            A[i++]=k+48;
        else
            A[i++]=k+55;
        N/=16;
    }
    for(j=i-1;j>=0;j--){
        printf("%c",A[j]);
    }
    printf("\n");
    return 0;
}

