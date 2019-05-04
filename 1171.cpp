#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,c=1,i;
    scanf("%d",&n);
    int A[n+2];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    sort(A,A+n);
    for(i=0;i<n;i++){
        if(A[i]==A[i+1])
            c++;
        else{
            printf("%d aparece %d vez(es)\n",A[i],c);
            c=1;
        }
    }
    return 0;
}
