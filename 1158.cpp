#include <stdio.h>
int main()
{
    int i,T,n,m,S=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&n,&m);
        if(n%2==0)
            n=n+1;
        for(i=0;i<m;i++){
            S+=n;
            n+=2;
        }
        printf("%d\n",S);
        S=0;
    }
    return 0;
}



