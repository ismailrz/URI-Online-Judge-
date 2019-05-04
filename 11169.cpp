#include<stdio.h>
int main()
{
    int a,b,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&a);
        if(a<14){
            printf("0 kg\n");
        }
        else{
            b=a-14;
            printf("%d kg\n",(b*b)+1);
        }
    }
    return 0;
}
