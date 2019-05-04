#include<stdio.h>
int main()
{
    int n,i,A,x,y,z;
    while(scanf("%d\n",&n)!=EOF){
            x=0;y=0;z=0;
        for(i=0;i<n;i++){
            scanf("%d",&A);
            if(A>19)
                y++;
            else if(A>9)
                x++;
        }
        if(y>0){
            printf("3\n");
            continue;
        }
        if(x>0){
            printf("2\n");
            continue;
        }
            printf("1\n");
    }
    return 0;
}
