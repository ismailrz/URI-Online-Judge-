#include <stdio.h>
int main()
{
  int i,j,num;
  scanf("%d",&num);
     for(j=1;j<=num*4;j++){
        if(j%4==0){
            printf("PUM\n");
            continue;
        }
        printf("%d ",j);
  }
  return 0;
}
