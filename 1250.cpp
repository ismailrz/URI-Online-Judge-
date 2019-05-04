#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,i,c;
    cin>>T;
    while(T--){
        cin>>n;
        int A[n];
        char B[n];
        c=0;
        for(i=0;i<n;i++)
            cin>>A[i];
        for(i=0;i<n;i++)
            cin>>B[i];

        for(i=0;i<n;i++){
            if((B[i]=='S' && A[i]<=2) || (B[i]=='J' && A[i]>2))
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
