#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0,n,b,m;
    char a[100];
    scanf("%s",a);
    n=strlen(a);
    m=(int)a;
    for(i=0;i<=n;i++){
        b=m%10;
        sum+=b;
        m=m/10;
    }
        printf("%d",sum);
    return 0;

}
