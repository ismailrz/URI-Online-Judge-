#include <stdio.h>
int main()
{
  int i,n,num;
  long long int display=0,t1=0,t2=1;
  scanf("%d",&n);
  while(n--){
        scanf("%d",&num);
        if(num==0){
            printf("Fib(0) = 0\n");
            continue;
        }
        else if(num==1){
            printf("Fib(1) = 1\n");
            continue;
        }
        else{
            display=t1+t2;
            for(i=1;i<num-1;i++){
                t1=t2;
                t2=display;
                display=t1+t2;
            }
        }
        printf("Fib(%d) = %lld\n",num,display);
        display=0,t1=0,t2=1;
  }
  return 0;
}

