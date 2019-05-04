#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char A[52];
    int i;
    while(scanf("%[^\n]",A)!=EOF){
        for(i=0;i<strlen(A);i++){
            if(A[i]>96 && A[i]<123){
                if(A[i]+13>122){
                    A[i]=96+(A[i]+13)-122;
                }
                else
                    A[i]=A[i]+13;
            }
            else if(A[i]>64 && A[i]<91){
                if(A[i]+13>90){
                    A[i]=64+(A[i]+13)-90;
                }
                else
                    A[i]=A[i]+13;
            }
            printf("%c",A[i]);
        }
        printf("\n");
    }
    return 0;
}
