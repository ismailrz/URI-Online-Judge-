#include <stdio.h>
int main()
{   double S=0;
    int i,j;
    for(i=3,j=2;i<=39;i+=2,j*=2){
        S+=((double)i/(double)j);
    }
    printf("%.2lf\n",S+1);
    return 0;
}


