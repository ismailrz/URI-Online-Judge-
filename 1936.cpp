#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,S;
    scanf("%d",&n);
    i=1;
    S=1;
    while(n>S){
        S*=++i;
    }
    cout<<i-1;
    return 0;
}
