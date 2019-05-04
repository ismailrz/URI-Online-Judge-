#include<stdio.h>
int main()
{
    int N,A;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&A);
        if(A==0)
            printf("NULL\n");
        else if(A<0 && A%2==0){
            printf("EVEN NEGATIVE\n");
        }
        else if(A>0  && A%2==0)
            printf("EVEN POSITIVE\n");
        else if(A<0 && A%2!=0){
            printf("ODD NEGATIVE\n");
        }
        else if(A>0  && A%2!=0)
            printf("ODD POSITIVE\n");
    }
    return 0;
}

