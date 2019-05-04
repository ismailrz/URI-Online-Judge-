#include<stdio.h>
int main()
{
    int B,i,j,k=1,w=1,p=1;
    while(scanf("%d",&B)!=EOF && B!=0)
    {
        for(i=1;i<=B;i++){
            for(j=1;j<=B;j++){
                if(i==1){
                        if(j==100)
                            printf("%4d",j);
                        else
                            printf("%3d",j);
                }
                else if(j==1){
                    printf("%3d",++w);
                }
                else if(i<=j)
                   printf("%3d",k++);
                else
                    printf("%3d",w-p++);
            }
            p=1;
            k=1;
            printf("\n");
        }
        w=1;
    }
    return 0;
}


