#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    double salary, bonous,TOTAL;
    gets(ch);
    scanf("%lf%lf",&salary,&bonous);
    TOTAL=salary+(bonous*.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}


