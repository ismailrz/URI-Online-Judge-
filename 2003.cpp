#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d:%d",&a,&b)!=EOF){
        switch(a){
            case 5:
            case 6:
                printf("Atraso maximo: 0\n");
                break;
            case 7:
                printf("Atraso maximo: %d\n",b);
                break;
            case 8:
                printf("Atraso maximo: %d\n",60+b);
                break;
            case 9:
                printf("Atraso maximo: %d\n",120+b);
                break;
        }
    }
    return 0;
}
