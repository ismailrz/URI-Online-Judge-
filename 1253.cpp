#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,n,S,ln;
    char A[50];
    cin>>T;
    while(T--){
        cin>>A;
        cin>>n;
        ln=strlen(A);

        for(i=0;i<ln;i++){
            S=A[i];
            if(S-n<65){
                S=65-(S-n);
                printf("%c",91-S);
            }
            else
                printf("%c",S-n);
        }
        cout<<endl;
    }
    return 0;
}
