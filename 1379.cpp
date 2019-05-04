#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,S;
    while(scanf("%d%d",&a,&b) && a!=0 && b!=0)
    {
       S=b-a;
       c=a-S;
       cout<<c<<endl;
    }
    return 0;
}

