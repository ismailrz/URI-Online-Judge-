#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    int n,l,c,S,i;
    double page;
    while(scanf("%d %d %d",&n,&l,&c)!=EOF)
    {
        S=0;
        string A[n];
        for(i=0; i<n; i++)
        {
            cin>>A[i];
            S+=A[i].size();
        }
        cout<<S<<endl;
        page=(double)(S+n-1)/(l*c);
        cout<<ceil(page)<<endl;
    }
    return 0;
}

