#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,n;
    while(scanf("%d",&n)!=EOF){
        int A[n],B[n],c=0;
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
        for(i=0;i<n;i++)
            scanf("%d",&B[i]);
        for(j=0;j<n;j++){
            for(i=j;i<n;i++){
                if(A[j]==B[i])
                    c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
