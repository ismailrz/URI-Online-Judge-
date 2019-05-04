#include<stdio.h>
int main()
{
    int R;
    double volume;
    scanf("%d",&R);
    volume=(4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
