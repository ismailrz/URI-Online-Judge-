#include<iostream>
using namespace std;
int main()
{
    int ck,i,S,n,j,T;
    cin>>T;
    while(T--){
        cin>>n;
        S=0;
        for(i=1;i<=n;i++){
            ck=0;
            if(i==1)ck=1;
            for(j=2;j<i;j++){
                if(i%j==0)
                    ck=1;
            }
            if(ck==0)
                S-=i;
            else
                S+=i;
        }
        cout<<S<<endl;

    }
    return 0;
}
