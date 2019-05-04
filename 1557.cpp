#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
    int B,i,j,m=1,k=1,w=1,p=0,ln;
    char  ch[12];
    while(scanf("%d",&B)!=EOF && B!=0)
    {
        for(i=1;i<=B;i++){
                m=k;
            for(j=1;j<=B;j++){
                printf("%*d",B,m);
                if(j==B)
                    continue;
               // printf(" ");
                m*=2;
            }
            p++;
            k=k*2;
            printf("\n");
        }
        m=1;
        k=1;
        p=0;
        printf("\n");

    }
    return 0;
}

