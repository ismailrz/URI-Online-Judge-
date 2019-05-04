#include<bits/stdc++.h>
using namespace std;
int main()
{
////    char A[50],B[50];
////    int ln1,ln2,c=0;
////    gets(A);
////    gets(B);
////    ln1=strlen(A);
////    ln2=strlen(B);
////
////    for(int i=0;i<ln1;i++){
////        for(int j=0;j<ln2;j++){
////            if(A[i]==B[j]  && A[i+1]==B[j+1])
////                c--;
////             if(A[i]==B[j]){
////                c++;
////                break;
////            }
////
////        }
////    }
////    if(c>0)
////        cout<<c<<endl;
////    else
////        cout<<"0"<<endl;
    string A,B;
    int z=0,c=0,i,j;
    while(getline(cin,A),getline(cin,B))
    {
        for(i=0; i<A.size(); i++)
        {
            int k=i;
            for(j=0; j<B.size(); j++)
            {
                if(A[k]==B[j])
                {
                    c++;
                    if(c>z)
                        z=c;
                    k++;

                }
                else c=0;
            }
        }
        cout<<z<<endl;
        z=c=0;
    }
    return 0;
}

