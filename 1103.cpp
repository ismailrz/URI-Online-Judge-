#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,M,H;
    while(scanf("%d%d%d%d",&a,&c,&b,&d)!=EOF){
        if(a==0 && b==0 && c==0 && d==0)
            break;
        if(a==b && c==d){
           H=24;M=0;
        }
       else if(a>b){
            if(c>d){
                H=24-a+b-1;
                M=60-c+d;
            }
            else{
                H=24-a+b;
                M=60-c+d-60;
            }
        }
        else if(b>a){
            if(d>c){
                H=24-a+b-24;
                M=d-c;
            }
            else{
                H=24-a+b-24-1;
                M=60-c+d;
            }
        }
        else{
            if(d>c){
                M=d-c;
                H=0;
            }
            else{
                M=d-c;
                H=24;
            }
        }
        printf("%d\n",H*60+M);
    }
    return 0;
}

