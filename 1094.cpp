#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c;
    int t,N,C=0,R=0,S=0,T;
    double A,B,D;
    cin>>t;
    while(t--){
        cin>>N>>c;
        if(c=='C'){
            C+=N;
        }
        else if(c=='R'){
                R+=N;
        }
        else
            S+=N;
    }
    T=C+R+S;
    A=(double)(C*100)/T;
    B=(double)(R*100)/T;
    D=(double)(S*100)/T;
    printf("Total: %d cobaias\n",T);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",A);
    printf("Percentual de ratos: %.2lf %%\n",B);
    printf("Percentual de sapos: %.2lf %%\n",D);
    return 0;
}


