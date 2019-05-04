#include <stdio.h>
int main()
{
    int i,n,S=0;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            return 0;
        if(n%2)
            n=n+1;
        for(i=0;i<5;i++){
            S+=n;
            n+=2;
        }
        printf("%d\n",S);
        S=0;
    }
    return 0;
}




