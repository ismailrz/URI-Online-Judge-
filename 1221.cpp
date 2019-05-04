#include<bits/stdc++.h>
using namespace std;
long long isprime(long long num){
    for(int i=3;i<=sqrt(num);i+=2){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int i,t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1)cout<<"Not Prime"<<endl;
        else if(n==2)cout<<"Prime"<<endl;
        else if
            (n%2==0)cout<<"Not Prime"<<endl;
        else if(isprime(n))
            cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;
    }
    return 0;
}

