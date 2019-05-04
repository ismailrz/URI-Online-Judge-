#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    int A[N],B[N];
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        B[i]=A[i];
    }
    sort(A,A+N);
    for(i=0;i<N;i++){
        if(B[i]==A[0])
            break;
    }
    printf("Menor valor: %d\n",B[i]);
    printf("Posicao: %d\n",i);
    return 0;
}
