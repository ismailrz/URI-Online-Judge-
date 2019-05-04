#include<stdio.h>
int main()
{
    int A,i;
    scanf("%d",&A);
    for(i=A;i<A+12;i++){
        if(i%2!=0)
            printf("%d\n",i);
    }
    return 0;
}

