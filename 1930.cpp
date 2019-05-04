#include<stdio.h>
int main()
{
    int a,b,c,d,k=0,i;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=1;i<a;i++){
        k++;
    }
    for(i=1;i<b;i++){
        k++;
    }
    for(i=1;i<c;i++){
        k++;
    }
    for(i=1;i<d;i++){
        k++;
    }
    printf("%d\n",k+1);
    return 0;
}
