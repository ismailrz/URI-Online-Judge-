#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p;
    char A[1000];
    while(gets(A) && A[0]!='*'){
            p=0;
            A[0]=toupper(A[0]);
        for(i=1;i<strlen(A)-1;i++){
            if(A[i]==' ' && toupper(A[i+1])!=A[0]){
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}
