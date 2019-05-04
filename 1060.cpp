#include<stdio.h>
int main()
{
    double A[6],sum=0;
    int i,c=0;
    for(i=0;i<6;i++){
        scanf("%lf",&A[i]);
    }
    for(i=0;i<6;i++){
        if(A[i]>0){
            sum+=A[i];
            c++;
        }
    }
    sum=sum/c;
    printf("%d valores positivos\n",c);
    printf("%.1lf\n",sum);
    return 0;
}
