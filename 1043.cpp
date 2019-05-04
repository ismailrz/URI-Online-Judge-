#include<stdio.h>
int main()
{
    double A,B,C,S;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A<B+C && B<A+C  && C<A+B){
        printf("Perimetro = %.1lf\n",A+B+C);
    }
    else{
        S=((A+B)*C)/2;
        printf("Area = %.1lf\n",S);
    }
    return 0;
}
