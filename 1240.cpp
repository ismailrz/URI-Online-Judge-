#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y;
    int i;
    cin>>i;
    while(i--){
        cin>>a>>b;
        while(b!=0){
            x=a%10; y=b%10;
            if(x!=y){
                cout<<"nao encaixa"<<endl;
                break;
            }
            a/=10; b/=10;
            if(b==0)
                cout<<"encaixa"<<endl;
        }
    }
    return 0;
}
