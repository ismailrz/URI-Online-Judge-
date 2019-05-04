#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,ck;
    scanf("%d%*c",&n);
    while(n--)
    {
        char A[26],B[26],C[26];
        ck=0;
        gets(A);
        gets(B);
        gets(C);
        for(i=0; i<strlen(B); i++)
        {
            c=0;
            for(j=0; j<strlen(A); j++)
            {
                if(B[i]==A[j])
                {
                    c=1;
                    break;
                }
            }
            if(c!=1)
            {
                ck=1;
                break;
            }
        }
        if(ck==0)
        {
            for(i=0; i<strlen(C); i++)
            {
                c=0;
                for(j=0; j<strlen(A); j++)
                {
                    if(C[i]==A[j])
                    {
                        c=1;
                        break;
                    }
                }
                if(c!=1)
                {
                    ck=1;
                    break;
                }
            }
        }

        if(ck==1)
            cout<<"CHEATER"<<endl;
        else
        {
            char D[26];
            int p=0;
            for(i=0; i<strlen(A); i++)
            {
                int ch=0;
                for(j=0; j<strlen(B); j++)
                {
                    if(A[i]==B[j])
                        ch=1;
                }
                for(j=0; j<strlen(C); j++)
                {
                    if(A[i]==C[j])
                        ch=1;
                }
                if(ch!=1)
                    D[p++]=A[i];

            }
            sort(D,D+p);
            for(i=0; i<p; i++)
                cout<<D[i];
            cout<<endl;
        }
    }
    return 0;
}
