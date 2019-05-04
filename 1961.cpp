#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int z[y];
    for(i=0;i<y;i++){
        scanf("%d",&z[i]);
    }
    for(i=0,j=1;i<y-1;i++,j++){
        if(z[i]+x<z[j] || z[j]+x<z[i]){
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}
