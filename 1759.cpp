#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("Ho!");
            break;
        }
        printf("Ho ");
    }
    printf("\n");
    return 0;
}
