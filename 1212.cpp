//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a,b,A,B,k,i;
//    while(scanf("%d%d",&a,&b)!=EOF){
//        if( a==0 && b==0)
//            break;
//        k=0;i=0;
//        if(a>b) swap(a,b);
//        while(b!=0){
//            A=a%10; B=b%10;
//            a/=10;b/=10;
//            if(i==2)
//                i=1;
//            if(A+B+i>9){
//                k++;
//                i++;
//            }
//        }
//        if(k>0)
//            cout<<k<<" carry operations."<<endl;
//        else
//            cout<<"No carry operation."<<endl;
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,A,B,k,i;
    while(scanf("%ld%ld",&a,&b)){
        if( a==0 && b==0)
            break;
        k=0;i=0;
        if(a>b) swap(a,b);
        while(b!=0){
            A=a%10; B=b%10;
            a/=10;b/=10;
            if(A+B+i<10){
                i=0;
            }
            else if(A+B+i>9){
                k++;
                i=1;
            }
        }
        if(k>0)
            cout<<k<<" carry operations."<<endl;
        else
            cout<<"No carry operation."<<endl;
    }
    return 0;
}
