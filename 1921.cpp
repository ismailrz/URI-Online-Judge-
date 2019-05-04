#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    long long int S=0,c=2;
    cin>>x;
    for(i=4;i<=x;i++){
        S+=c++;
    }
    cout<<S<<endl;
    return 0;
}
