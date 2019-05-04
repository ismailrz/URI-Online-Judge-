#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string A;
        int i=0;
        cin>>A;
        if(A[0]!=' '){
            cout<<A[0];
            i=1;
        }
        for(;i<A.size();i++){
            if(A[i]==' '){
                if(A[i]!=A[i+1])
                    cout<<A[i+1];
            }

        }
        cout<<endl;
    }
    return 0;
}
