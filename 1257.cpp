#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,j,n,S,ln;
    char A[50];
    cin>>T;
    while(T--){
        cin>>n;
        S=0;
        for(i=0;i<n;i++){
            cin>>A;
            ln=strlen(A);
            for(j=0;j<ln;j++){
                S+=A[j]-65+i+j;
            }
        }
        cout<<S<<endl;
    }
    return 0;
}
