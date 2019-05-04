#include<stdio.h>
int queue[100];
int front=0,rear=0;

void push(int value)
{
    if(front==5)
        printf("Overflow\n\n\\");

    else{
        queue[front]=value;
        front++;
    }
}

 void pop()
{
    if(front==rear)
        printf("Underflow\n\n\\");

    else
        rear++;
}

void show()
{
    for(int i=rear;i<front;i++){
        printf("%d ",queue[i]);
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

