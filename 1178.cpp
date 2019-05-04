#include<stdio.h>
int main()
{
    int i;
    double A[100],Y;
    scanf("%lf",&Y);
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,Y);
        Y=Y/2;
    }
    return 0;
}
