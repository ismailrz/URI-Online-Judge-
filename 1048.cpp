#include<stdio.h>
int main()
{
    double n,s;
    scanf("%lf",&n);
     if(n>=0 && n<=400){
        s=n*.15+n;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",s-n);
        printf("Em percentual: 15 %%\n");
     }
     else if(n>400 && n<=800){
        s=n*.12+n;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",s-n);
        printf("Em percentual: 12 %%\n");
     }
    else if(n>800 && n<=1200){
        s=n*.10+n;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",s-n);
        printf("Em percentual: 10 %%\n");
        }
    else if(n>1200 && n<=2000){
        s=n*.07+n;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",s-n);
        printf("Em percentual: 7 %%\n");
     }
     else {
        s=n*.04+n;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",s-n);
        printf("Em percentual: 4 %%\n");
     }

    return 0;
}
