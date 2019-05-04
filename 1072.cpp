#include<stdio.h>
int main()
{
    int N,c=0,d=0,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]>=10 && a[i]<=20)
            c++;
        else
            d++;
    }
    printf("%d in\n",c);
    printf("%d out\n",d);
    return 0;
}
