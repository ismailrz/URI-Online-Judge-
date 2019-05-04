#include<stdio.h>
int main()
{
    int a,b,n,m,c=0;
    scanf("%d%d",&a,&b);
    while(a<0){
        if(a%b==0){
            n=a/b;
            goto T;
        }
        c++;
        a-=1;
    }
    n=a/b;
    m=a%b;
    printf("%d %d\n",n,m);
    return 0;
    T:
    printf("%d %d\n",n,c);
    return 0;
}
