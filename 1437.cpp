#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,S,i;

    while(scanf("%d",&a) && a!=0)
        {
            char A[a+5];
            S=0;
            for(i=0;i<a;i++){
                cin>>A[i];
                if(A[i]=='D')
                    S++;
                else
                    S--;
            }
                S%=4;
                if(S==0) cout<<"N"<<endl;
                else if(S==1|| S==-3) cout<<"L"<<endl;
                else if(S==2 || S==-2) cout<<"S"<<endl;
                else if(S==3 || S==-1) cout<<"O"<<endl;

        }

    return  0;
}

