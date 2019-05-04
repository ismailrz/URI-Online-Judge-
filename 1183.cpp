#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=1;
    double A[12][12],Sum=0;
    char ch;
    ch=getchar();
    for(j=0;j<12;j++){
        for(i=0;i<12;i++){
        scanf("%lf",&A[j][i]);
        }
    }
    for(j=0;j<11;j++){
        for(i=k;i<12;i++){
        Sum+=A[j][i];
        }
        k++;
    }
    if(ch=='S')
        printf("%.1lf\n",Sum);
    else if(ch=='M')
        printf("%.1lf\n",Sum/66);
    return 0;
}
