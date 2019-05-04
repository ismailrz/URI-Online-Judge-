#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{

    char  A[5000];
    int i,j,k,S;
    while(gets(A))
    {

        j=0;
        S=0;
        char B[strlen(A)];
        B[j++]=tolower(A[0]);
        for(i=1; i<strlen(A); i++)
        {
            if(A[i]==' ')
                B[j++]=tolower(A[i+1]);
        }
        k=0;
        char C[j];
        for(i=0; i<j; i++)
            if(B[i]!=B[i+1] && B[i+1]!=B[i+2]);
            else
                C[k++]=B[i];

        for(i=0; i<k; i++)
            if(C[i]==C[i+1])
                S+=1;
        cout<<S<<endl;
    }
    return 0;
}
