#include <stdio.h>
#include <math.h>
int main()
{
     float X,soma,media;
     int i;
     while(1)
     {
        i=1;
        media=0;
        soma=0;
        while(i<=2)
        {
            scanf("%f",&X);
            if(X<0 || X>10)
            {
            printf("nota invalida\n");
            }
        else if(X>=0 && X<=10)
        {
        soma=soma+X;
        i++;
        }
    }
    media=soma/2;
    printf("media = %.2f\n",media);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%f",&X);

    if(X==2)
      break;
    else
    {
      if(X==1)
      {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f",&X);
      }
    }
    }
}


