#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,S;
    while(scanf("%d",&n)!=EOF)
    {
        char A[n];
         S=0;
        for(i=0; i<n; i++)
        {
           cin>>A[i];
            if(A[i]=='1')
                S+=1;
            else if(A[i]=='2')
                S+=2;
            else if(A[i]=='3')
                S+=3;
            else if(A[i]=='4')
                S+=4;
            else if(A[i]=='5')
                S+=5;
            else if(A[i]=='6')
                S+=6;
            else if(A[i]=='7')
                S+=7;
            else if(A[i]=='8')
                S+=8;
            else if(A[i]=='9')
                S+=9;

        }
        if(S%3==0)
            printf("%d sim\n",S);
        else
           printf("%d nao\n",S);
    }
    return 0;
}
