#include<stdio.h>
int main()
{
    int X,Y;
    double price;
    scanf("%d%d",&X,&Y);
    switch(X){
    case 1:
            price=4.00*Y;
        printf("Total: R$ %.2lf\n",price);
        break;
      case 2:
            price=4.50*Y;
        printf("Total: R$ %.2lf\n",price);
        break;
      case 3:
            price=5.00*Y;
        printf("Total: R$ %.2lf\n",price);
        break;
      case 4:
            price=2.00*Y;
        printf("Total: R$ %.2lf\n",price);
        break;
      case 5:
            price=1.50*Y;
        printf("Total: R$ %.2lf\n",price);
        break;

    }

        return 0;
}


