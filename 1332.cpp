#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[6];
    int N,ln;
    cin>>N;
    while(N--){
        cin>>A;
        ln=strlen(A);
        if(ln<4){
            if(A[0]=='o' && A[1]=='n' || A[0]=='o' && A[2]=='e' || A[1]=='n' && A[2]=='e')
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else
            cout<<"3"<<endl;
    }
    return 0;
}
