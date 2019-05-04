#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,i,j,k;
    cin>>T;
    int A[T+2][T+2];
    for(i=0;i<=T;i++)
        for(j=0;j<=T;j++)
            cin>>A[i][j];
        for(k=0;k<T;k++){
            for(i=0,j=1;i<T;i++,j++)
                if(A[k][i]+A[k][j]+A[k+1][i]+A[k+1][j]>=2)
                    cout<<'S';
                else
                    cout<<'U';
            cout<<endl;

        }
    return 0;

}

