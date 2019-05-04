#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A[50];
    char B[50];
    int N,i,ln1,ln2;
    while(scanf("%d",&N)!=EOF &&N!=0){
            ln2=0;
        for(i=0;i<N;i++){
            cin>>B;
            A[i]=B;
            ln1=strlen(B);
            if(ln1>ln2)
                ln2=ln1;
        }
        for(i=0;i<N;i++){
             cout<<setw(ln2)<<A[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
