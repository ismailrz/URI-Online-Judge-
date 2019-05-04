#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int ar[10000];
int r;
void sive()
{
    int ck;
    for(int i=2; i<=100; i++)
    {
        ck=0;
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                ck=1;
            }
        }
        if(ck==0)
            ar[i]=1;
    }
}
int main()
{
    sive();
    int i,j,n;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        if(ar[i]==1)
            cout<<i<<endl;
    }
}
