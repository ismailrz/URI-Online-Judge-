#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[50],B[50];
    int T,i,ln,ln2,N,x,y;
    cin>>T;
    while(T--){
        scanf("%s",A);
        scanf("%s",B);
        ln=strlen(A);
        ln2=strlen(B);
        x=ln;
        y=ln2;
        if(ln2>ln){
            N=ln2;
            ln2=ln;
            ln=N;
        }
        for(i=0;i<ln2;i++){
            cout<<A[i]<<B[i];
        }
        if(x>y){
            for(i=ln2;i<x;i++)
                cout<<A[i];
        }
        else{
            for(i=ln2;i<y;i++)
                cout<<B[i];
        }
        cout<<endl;
    }
    return 0;
}
