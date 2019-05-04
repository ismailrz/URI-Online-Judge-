#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF && n!=0){
        for(i=1;i<=n;i++){
            printf("%d",i);
            if(i==n)
                continue;
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
