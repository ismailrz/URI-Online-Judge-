#include<stdio.h>
#include<string.h>
int main()
{
    int N,i,j;
    double A[12][12],Sum=0;
    char ch;
    scanf("%d%*c",&N);
    ch=getchar();
    for(j=0;j<12;j++){
        for(i=0;i<12;i++){
        scanf("%lf",&A[j][i]);
        }
    }
    for(i=0;i<12;i++){
        Sum+=A[i][N];
    }
    if(ch=='S')
        printf("%.1lf\n",Sum);
    else if(ch=='M')
        printf("%.1lf\n",Sum/12);
    return 0;
}

