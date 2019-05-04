#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long a,b,Sum;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        int A[35],S1,S2,i=0;
        if(b>a) swap(a,b);
        while(a>0)
        {
            S1=a%2;
            S2=b%2;
            if(b>0){
            if(S1!=S2)
                A[i++]=1;
            else
                A[i++]=0;
            }
            else
                A[i++]=S1;
            a/=2;
            b/=2;
        }
        int j,ck=0,m=0;
        for(j=i-1;j>=0;j--){
            if(A[j]==1)
                ck=1;
            if(ck==1)
                m++;
        }
        Sum=0;
        j=0;
        for(i=0;i<m;i++)
        {
            Sum+=A[j++]*pow(2,i);
        }
        printf("%lld\n",Sum);
    }
    return 0;
}
