#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[52];

    while(gets(A)){
        int i,ln,position=1;
        ln=strlen(A);
        for(i=0;i<ln;i++){
            if(A[i]==' ');
            else if(position ==1){
                A[i]=toupper(A[i]);
                position =0;
            }
            else if(position ==0){
                A[i]=tolower(A[i]);
                position =1;
            }
        }
        for(i=0;i<ln;i++){
            cout<<A[i];
        }
        cout<<endl;
    }
    return 0;
}

