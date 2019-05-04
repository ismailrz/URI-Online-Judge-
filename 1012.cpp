#include<stdio.h>
int main()
{
    double A,B,C,T,CI,TR,Q,R;
    scanf("%lf%lf%lf",&A,&B,&C);
    T=.5*A*C;
    CI=3.14159*C*C;
    TR=(A+B)*C*.5;
    Q=B*B;
    R=A*B;
    printf("TRIANGULO: %.3lf\n",T);
    printf("CIRCULO: %.3lf\n",CI);
    printf("TRAPEZIO: %.3lf\n",TR);
    printf("QUADRADO: %.3lf\n",Q);
    printf("RETANGULO: %.3lf\n",R);
    return 0;
}

