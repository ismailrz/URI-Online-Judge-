#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j,ck,c,k,num;
    int  A[10];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        c=0;
        for(i=n; i<=m; i++)
        {
            j=0;
            num=i;
            while(num>0)
            {
                A[j++]=num%10;
                num/=10;
            }
            ck=0;
            sort(A,A+j);
            for(k=1; k<j; k++)
            {
                if(A[k-1]==A[k]){
                    ck=1;
                    break;
                }
            }
            if(ck==0)
                c++;

        }
        cout<<c<<endl;
    }
    return 0;
}
