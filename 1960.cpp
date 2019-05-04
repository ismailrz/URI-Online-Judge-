#include<iostream>
using namespace std;
int main()
{
    int A,S,i,m=0,k=0,j,p=0,q=0;
    char c[10];
    cin>>A;
    while(A!=0){
        if(A>=500){
            A-=500;
            c[m++]='D';
        }
        if(A>=100){
            A-=100;
            c[m++]='C';
            continue;
        }
        if(A>=50){
            A-=50;
            c[m++]='L';
        }
          if(A>=10){
              A-=10;
            c[m++]='X';
            continue;
        }
          if(A>=5){
              A-=5;
            c[m++]='V';
        }
          if(A>=1){
              A-=1;
            c[m++]='I';
        }
    }
    for(i=0,j=0;i<m;i++,j++){
        if(c[i]=='C'){
            k++;
            if(k==4){
                c[i-4]='C';
                c[i-3]='M';
                j-=3;
            }
        }
        if(c[i]=='X'){
            p++;
            if(p==4){
                c[i-3]='X';
                c[i-2]='L';
                j-=2;
            }
        }
        if(c[i]=='I'){
            q++;
            if(q==4){
                c[i-4]='I';
                c[i-3]='X';
                j-=3;
            }
        }
    }
    for(i=0;i<j;i++){
        cout<<c[i];
    }

    return 0;
}


