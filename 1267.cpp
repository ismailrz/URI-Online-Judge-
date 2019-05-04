#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,ck,p,i,j;
    while(scanf("%d %d",&n,&d) && n!=0 && d!=0){
    int A[n];
    for(i=0;i<n;i++)
        A[i]=1;
    for(i=0;i<d;i++){
        for(j=0;j<n;j++){
            scanf("%d",&p);
            if(p==0)
                A[j]=0;
        }
    }
    ck=0;
    for(i=0;i<n;i++){
        if(A[i]==1){
            ck=1;
            break;
        }
    }
    if(ck==1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }
    return 0;
}

