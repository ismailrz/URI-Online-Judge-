#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,S,a,b;
    char c;
    cin>>T;
    while(T--){
        cin>>a>>c>>b;
        if(a==b)
            S=a*b;
        else if(c>96)
            S=a+b;
        else
            S=b-a;
        cout<<S<<endl;
    }
    return 0;
}

