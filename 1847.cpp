#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    x=fabs(a-b);
    y=fabs(b-c);
    if(a>b){
        if(c>b || x>y)
            printf(":)\n");
        else
            printf(":(\n");
    }
    else if(b>a){
        if(b>c || x>y)
            printf(":(\n");
        else
            printf(":)\n");
    }
    else
    {
        if(c>b)
            printf(":)\n");
        else
            printf(":(\n");
    }
    return 0;
}
