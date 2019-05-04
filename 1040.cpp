#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,A,X,B;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    A=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n",A);
    if(A>7)
        printf("Aluno aprovado.\n");
   else if(A<5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%lf",&X);
        printf("Nota do exame: %.1lf\n",X);
        B=(A+X)/2;
        if(B>5)
            printf("Aluno aprovado.\n");
        else if(B<4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",B);
    }

        return 0;
}
