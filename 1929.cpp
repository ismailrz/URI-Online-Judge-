#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T[4],i;
    for(i=0;i<4;i++){
        cin>>T[i];
    }
    sort(T,T+4);
    if(T[0]+T[1]>T[2] || T[1]+T[2]>T[3])
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}

