#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,num;
    string S;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>S>>num;
        if(S=="Thor" || num==50)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
