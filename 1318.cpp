#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,p;
    while(scanf("%d %d",&n,&m) && n!=0 && m!=0)
    {
        int A[m+2];
        for(i=0; i<m; i++)
        {
            scanf("%d",&A[i]);
        }
        sort(A,A+m);
        p=0;
        for(i=0; i<m; i++)
        {
            if(A[i]==A[i+1]&&A[i+1]==A[i+2])
                continue;
            else if(A[i]==A[i+1])
                p++;
            ///cout<<A[i]<<' ';
        }
        cout<<p<<endl;
    }
    return 0;
}
