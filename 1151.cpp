#include <stdio.h>
int main()
{
  int t1=0,i,t2=1,num;
  double display=0;
  scanf("%d",&num);
  printf("%d %d", t1, t2);
  display=t1+t2;
  for(i=1;i<num-1;i++){
        printf(" ");
        printf("%.lf",display);
        t1=t2;
        t2=display;
        display=t1+t2;
  }
  printf("\n");
  return 0;
}
