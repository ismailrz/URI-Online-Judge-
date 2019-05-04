#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,i,j,m;
    cin>>a;
        b=(a+1)/2;
        for(i=0;i<a;i++){
            cout<<"1 ";
        }
        cout<<endl;
    for(i=1;i<a-1;i++){
            m=1;
        for(j=0;j<b;j++){
            if(b>1)
                cout<<m++<<" ";
            else
                cout<<"1 ";
        }
        if(a%2)
            m=m-2;
        else
            m=m-1;
        for(j=b;j<a;j++){
            if(b>1)
                cout<<m--<<" ";
            else
                cout<<"1 ";
        }

        cout<<endl;
    }
    for(i=0;i<a;i++){
        cout<<"1 ";
    }
        cout<<endl;
    return 0;
}
