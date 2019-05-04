#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char A[16];
    long long S=1;
    while(scanf("%s",A)!=EOF){
        if(A[0]=='0')
            break;
        for(int i=1;i<=strlen(A);i++){
            S*=i;
        }
        printf("%lld\n",S);
        S=1;
    }
    return 0;
}
