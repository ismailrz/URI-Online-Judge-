#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[100],B[100];
    int ln,ln2,p,i,j,T;
    scanf("%d%*c",&T);
    while(T--){
        j=0;
        gets(A);
        ln=strlen(A);
        ln2=ln/2;
        p=ln-ln2;
        for(i=p-1;i>=0;i--){
            B[j++]=A[i];
        }
        for(i=ln-1;i>=p;i--){
            B[j++]=A[i];
        }
        for(j=0;j<ln;j++){
            cout<<B[j];
        }
        cout<<endl;
    }

    return 0;
}
