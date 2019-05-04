#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        if(a>b) swap(a,b);
        printf("%ld\n",b-a);
    }

    return 0;
}
