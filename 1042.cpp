#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,ar[3],AR[3];
        for(i=0;i<3;i++){
            cin>>ar[i];
            AR[i]=ar[i];
        }
     sort(ar,ar+3);
        for(i=0;i<3;i++){
            cout<<ar[i]<<endl;
        }
        cout<<endl;
        for(j=0;j<3;j++){
            cout<<AR[j]<<endl;
        }

    return 0;
}
