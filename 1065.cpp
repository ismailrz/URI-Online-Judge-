#include<stdio.h>
int main()
{
    int i,c=0,A[5];
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++){
        if(A[i]%2==0){
            c++;
        }
    }
    printf("%d valores pares\n",c);
    return 0;
}

