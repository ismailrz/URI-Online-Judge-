#include<stdio.h>
int main()
{
    int i=0,a,b,c,x=0,y=0,z=0,k=0;

    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
         k++;
        if(a==b)
            x++;
        else if(a>b)
            y++;
        else
            z++;
        if(c!=1)
            break;
    }
    for(i=0;i<k;i++){
        printf("Novo grenal (1-sim 2-nao)\n");
    }
    printf("%d grenais\n",k);
    printf("Inter:%d\n",y);
    printf("Gremio:%d\n",z);
    printf("Empates:%d\n",x);
    printf("Inter venceu mais\n");
    return 0;
}

