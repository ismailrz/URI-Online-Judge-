#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n[100],m[100],i;
    for(i=0;i<100;i++){
        cin>>n[i];
        m[i]=n[i];
    }
    sort(n,n+100);
    for(i=0;i<100;i++){
        if(m[i]==n[99]){
            cout<<m[i]<<endl;
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}

