#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j,k,p=0;
    cin>>n;
    cin>>j;
    for(i=2;i<=n;i++){
        cin>>k;
        if(j<k)
            j=k;
        else if(j>k){
            p=i;
            break;
        }
    }
    cout<<p<<endl;
    return 0;

}


