#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=-6;i<6;i++){
        if(i%2==0)
            continue;
        else
           sum+=i;
        printf("%d\n",i);
    }
    printf("n\n\nn\n\n%d\n",sum);
    return 0;
}
