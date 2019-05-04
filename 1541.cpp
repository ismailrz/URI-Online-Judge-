#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,Sum;
    while(scanf("%d %d %d",&A,&B,&C)!=EOF && A!=0)
    {
        Sum=sqrt((A*B*100)/C);
        printf("%d\n",Sum);
    }
    return 0;
}
