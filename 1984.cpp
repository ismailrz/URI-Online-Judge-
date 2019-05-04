#include<stdio.h>
int main()
{
    long long A,S;
    scanf("%llu",&A);
    while(A!=0){
        S=A%10;
        A/=10;
        printf("%llu",S);
    }
    printf("\n");
    return 0;
}

