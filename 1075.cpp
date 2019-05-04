#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("2\n");
    for(i=n;i<10000;i++){
        if(i%n==0)
            printf("%d\n",i+2);
    }
    return 0;
}
