#include<stdio.h>
int main()
{
    int B;
    while(scanf("%d",&B)!=EOF)
    {
        if(B==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }
    return 0;
}



