#include<bits/stdc++.h>
using namespace std;
int main()
{
    int S=0,i,T=0;
    char A[10];
    while(1){
            if(T>2) return 0;
            gets(A);
            if(A[0]=='*')
                S+=4;
            else if(A[1]=='*')
                S+=2;
            else if(A[2]=='*')
                S+=1;
            else{
                cout<<S<<endl;
                S=0;T++;
            }
    }
    return 0;
}
