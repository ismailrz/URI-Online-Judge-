#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j,c,T;
    while(scanf("%d",&T))
    {
        if(T==0) return 0;
        while(T--)
        {
            c=0;
            for(i=0; i<5; i++)
            {
                scanf("%d",&n);
                if(n<=127)
                {
                    c++;
                    j=i;
                }
            }
            if(c!=1)
                printf("*\n");
            else
            {
                if(j==0)
                    printf("A\n");
                else if(j==1)
                    printf("B\n");
                else if(j==2)
                    printf("C\n");
                else if(j==3)
                    printf("D\n");
                else if(j==4)
                    printf("E\n");

            }
        }

    }
    return 0;
}
