#include<iostream>
using namespace std;
int main()
{
    int i,j,ck;
    char ch;
    string A;
    while(cin>>ch>>A)
    {
        j=0,ck=0;
        string B;
        if(ch=='0' && A=="0")
            break;
        for(i=0; i<A.size(); i++)
        {
            if(A[i]!=ch)
            {
                if(A[i]!='0')
                    ck=1;
                if(ck==1)
                    B[j++]=A[i];
            }

            }

            if(B[0]=='0' || j==0)
                cout<<"0"<<endl;
            else
            {
                for(i=0; i<j; i++)
                    cout<<B[i];
                cout<<endl;
            }
        }
        return 0;
    }
