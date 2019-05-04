#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    while(scanf("%d%*c",&n) and  n!=0)
    {
        string A[n];
        char B[n][55];
        int ln2[n];
        int z=0;
        for(i=0; i<n; i++)
            getline(cin,A[i]);

        for(i=0; i<n; i++)
        {
            int p=0,ck=0;
            for(j=1; j<=A[i].size(); j++)
            {
                if(A[i][j-1]==' ' && A[i][j]==' ' );

                else {
                        if(A[i][j-1]!=' ')
                            ck=1;

                    if(ck==1){
                    B[i][p++]=A[i][j-1];
                    }
                }

            }
            ln2[i]=strlen(B[i]);
            if(ln2[i]>z)
                z=ln2[i];
        }
        for(i=0; i<n; i++)
        {
        for(k=0;k<z-ln2[i];k++)
                cout<<" ";

            cout<<B[i];
            cout<<endl;
        }
        cout<<endl;

    }
    return 0;
}
