#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,p,q,i;
    while(scanf("%d",&a)!=EOF && a!=0){
            p=0;q=0;
        for(i=0;i<a;i++){
            cin>>b;
            if(b==0)
                p++;
            else
                q++;
        }
        printf("Mary won %d times and John won %d times\n",p,q);
    }
    return 0;
}
