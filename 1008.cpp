#include<stdio.h>
int main()
{
    int number,hr;
    float salary,SALARY;
    scanf("%d%d%f",&number,&hr,&salary);
    SALARY=hr*salary;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}

