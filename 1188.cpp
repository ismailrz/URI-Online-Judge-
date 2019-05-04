#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=4,m=7;
    double A[12][12],Sum=0;
    char ch;
    ch=getchar();
    for(j=0;j<12;j++){
        for(i=0;i<12;i++){
        scanf("%lf",&A[j][i]);
        }
    }
    for(j=7;j<12;j++){
        for(i=5;i>k;i--){
        Sum+=A[j][i];
        }
        k--;
    }
    for(j=7;j<12;j++){
        for(i=6;i<m;i++){
        Sum+=A[j][i];
        }
        m++;
    }

    if(ch=='S')
        printf("%.1lf\n",Sum);
    else if(ch=='M')
        printf("%.1lf\n",Sum/30);
    return 0;
}
