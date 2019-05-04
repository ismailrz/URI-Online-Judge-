//#include<stdio.h>
//int main()
//{
//    int a,b,i,t,T;
//    scanf("%d",&T);
//    while(T--){
//        scanf("%d%d",&a,&b);
//        if(a>b){
//            t=a;
//            a=b;
//            b=t;
//        }
//        for(i=a;i>1;i-=2){
//            if(a%i==0 && (b-a)%i==0){
//                printf("%d\n",i);
//                break;
//            }
//        }
//    }
//    return 0;
//}

#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
