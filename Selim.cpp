#include<stdio.h>
#include<string.h>
int main()
{
    int s,n;
    scanf("%d%d",&n,&s);
    if(s>n)
        printf("SELIM  Big S = %d\n",s);
    else
        printf("N Big S = %d\n",n);
    return 0;
}
