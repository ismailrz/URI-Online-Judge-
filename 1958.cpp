#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0,m=0;
    char A[112],B[4];
    cin>>A;
    j=strlen(A);
    for(i=0;i<j;i++){
        if(A[i]=='.')
            break;
        else if(A[i]=='-' || A[0]=='0' || (A[0]=='-' && A[1]=='0'));
        else
            c++;
    }
 for(i=0;i<j;i++){
        if(m==5) break;
        else if(A[i]=='.' || A[i]=='-' || A[0]=='0' || (A[i]=='-' && A[i+1]=='0'));
        else
            B[m++]=A[i];
    }

    cout<<c<<endl;
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}
