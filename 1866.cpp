#include<stdio.h>
int main()
{
    int T,S=0,i,P;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&P);
        for(i=0;i<P;i++){
            if(i%2==0)
                S+=1;
            else
                S-=1;
    }
    printf("%d\n",S);
    S=0;
    }
    return 0;
}
