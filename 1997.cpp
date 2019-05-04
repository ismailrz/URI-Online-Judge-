#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,c=0;
    char A[500],B[500];
    cin>>A>>B;
    for(i=0;i<strlen(A);i++){

        if(A[i]!=B[i])
            c++;
        if(A[j]==B[i])
            break;
        j++;
    }

    cout<<c<<endl;
    return 0;
}
