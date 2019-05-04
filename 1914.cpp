#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,T;
    char A[102],B[7],C[102],D[7];
    cin>>T;
    while(T--){
        cin>>A>>B>>C>>D;
        cin>>x>>y;
        if(strcmp(B,"PAR")==0){
        if((x+y)%2==0)
            cout<<A<<endl;
        else
            cout<<C<<endl;
        }
        else{
            if((x+y)%2==0)
            cout<<C<<endl;
        else
            cout<<A<<endl;
        }
    }
    return 0;
}
