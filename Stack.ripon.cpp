#include<stdio.h>
int stack[100];
int t=1;

void push(int value)
{
    if(t==5)
        printf("Overflow\n\n\\");

    else{
        stack[t]=value;
        t++;
    }
}

 void pop()
{
    if(t==0)
        printf("Underflow\n\n\\");

    else
        t--;
}

void show()
{
    for(int i=1;i<t;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    T:
    printf("if Push Data then press : 1\n");
    printf("if pop Data then press : 2\n");
    printf("if show Data then press : 3\n");
    int item;
    scanf("%d",&item);
    if(item==1){
        printf("Enter item : \n");
        int x;
        scanf("%d",&x);
        push(x);
    }
    else if(item==2){
        pop();
        printf("Success\n");
    }
    else if(item==3){
        show();
    }
    else {
        printf("Wrong key............\n \t...please try again........\n\n\n");
    }
    goto T;
    return 0;
}
