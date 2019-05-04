#include<iostream>
#include<cmath>
using namespace std;
int isprime(int num){
    for(int i=3;i<=sqrt(num);i+=2){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int i,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1)cout<<"1 nao eh primo"<<endl;
        else if(n==2)cout<<"2 eh primo"<<endl;
        else if
            (n%2==0)cout<<n<<" nao eh primo"<<endl;
        else if(isprime(n))
            cout<<n<<" eh primo"<<endl;
        else
            cout<<n<<" nao eh primo"<<endl;
    }
    return 0;
}


