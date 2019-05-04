#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a,b;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        int f=0,g=0;
        while(n--){
            scanf("%d%d",&a,&b);
            if(a>b)
                f++;
            if(b>a)
                g++;

        }
        printf("%d %d\n",f,g);
    }
    return 0;
}
