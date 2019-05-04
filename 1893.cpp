#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int A,B;
    while(scanf("%d%d",&A,&B)!=EOF)
    {
        if(A-B>=3) cout<<"minguante"<<endl;
        else if(A<=2 && B<=2) cout<<"nova"<<endl;
        else if(A<=96 && B<=96) cout<<"crescente"<<endl;
        else if(A<=100 && B<=100) cout<<"cheia"<<endl;
    }
    return 0;
}

