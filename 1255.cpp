#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{

    int n;
    scanf("%d%*c",&n);
    while(n--)
    {
        int i,p=0,q=0,ln=0,k=0,x=0;
        char  A[200],B[200];
        gets(A);
        ln=strlen(A);
        for(i=0; i<ln; i++)
            if((A[i]>=65 && A[i]<91) || (A[i]>=97 && A[i]<123))
                B[k++]=tolower(A[i]);
        sort(B,B+k);
        for(i=0; i<k; i++)
        {

            if(B[i]==B[i+1])
            {

                p++;
            }
            else if(p>q)
            {
                q=p;
                p=0;
            }
            else p=0;
        }
        for(i=0; i<k; i++)
        {
            if(B[i]==B[i+1])
            {

                x++;
                continue;
            }
            if(x==q)
            {
                cout<<B[i];
                x=0;
            }
            else x=0;
        }
        cout<<endl;
    }
    return 0;
}
