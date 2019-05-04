#include<stdio.h>
int main()
{
    int x,i,y;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++){
        printf("%d",i);
        if(i%x==0){
            printf("\n");
            continue;
        }
        printf(" ");
    }
    return 0;
}
