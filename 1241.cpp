#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[1000],B[1000];
    int T,i,ln,ln2,N=1;
    cin>>T;
    while(T--){
        scanf("%s",A);
        scanf("%s",B);
        ln=strlen(A);
        ln2=strlen(B);
        for(i=1;i<=ln2;i++){
            if(A[ln-i]==B[ln2-i]){
                N++;
            }
        }
        if(N>ln2)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
        N=1;
    }
    return 0;
}

