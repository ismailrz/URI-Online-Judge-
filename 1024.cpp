#include<bits/stdc++.h>
using namespace std;
int main()
{
     char A[1003];
    int i,ln;
    gets(A);
    ln=strlen(A);
    for(i=0;i<ln/2;i++){
            if(A[i]>=65 && A[i]<=90)
                A[i]+=2;
        else if(A[i]>=97 && A[i]<=122)
            A[i]+=2;
    }
    for(i=ln/2;i<ln;i++){
        if(A[i]>=65 && A[i]<=90 )
            A[i]-=1;
        else if(A[i]>=97 && A[i]<=122)
            A[i]-=1;
    }
    for(i=0;i<ln;i++)
        cout<<A[i];
            cout<<endl;
 for(i=ln-1;i>ln/2;i--)
        cout<<A[i];


}


