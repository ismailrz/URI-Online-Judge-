#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,n;
    char A[55],ch;
    while(gets(A)!=NULL)
    {
        j=0;k=0;
        for(i=0; i<strlen(A); i++)
        {
            if(A[i]=='_' && j==0)
            {
                cout<<"<i>";
                j=1;
            }
            else if(A[i]=='_' && j==1)
            {
                cout<<"</i>";
                j=0;
            }
            else if(A[i]=='*' && k==0)
            {
                cout<<"<b>";
                k=1;
            }
            else if(A[i]=='*' && k==1)
            {
                cout<<"</b>";
                k=0;
            }
            else
                cout<<A[i];

        }
        cout<<endl;
    }

    return 0;
}

