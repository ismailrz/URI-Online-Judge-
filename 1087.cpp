#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,C;
    while(scanf("%d%d%d%d",&a,&b,&x,&y)!=EOF){
        C=0;
        if(a==0 && b==0 && x==0 && y==0)
            break;
        if(a==x && b==y)
            C=0;
        else if(a==x || b==y)
            C=1;
        else if((a-1==x && b-1==y) || (a-2==x && b-2==y) || (a-3==x && b-3==y) || (a-4==x && b-4==y) || (a-5==x && b-5==y)|| (a-6==x && b-6==y) || (a-7==x && b-7==y))
            C=1;
        else if((a+1==x && b-1==y) || (a+2==x && b-2==y) || (a+3==x && b-3==y) || (a+4==x && b-4==y) || (a+5==x && b-5==y)|| (a+6==x && b-6==y) || (a+7==x && b-7==y))
            C=1;
        else if((a-1==x && b+1==y) || (a-2==x && b+2==y) || (a-3==x && b+3==y) || (a-4==x && b+4==y) || (a-5==x && b+5==y)|| (a-6==x && b+6==y) || (a-7==x && b+7==y))
            C=1;
        else if((a+1==x && b+1==y) || (a+2==x && b+2==y) || (a+3==x && b+3==y) || (a+4==x && b+4==y) || (a+5==x && b+5==y)|| (a+6==x && b+6==y) || (a+7==x && b+7==y))
            C=1;
        else
            C=2;
        cout<<C<<endl;
    /** if(X1==X2 && Y1==Y2)
         printf("0\n");
      else if(X1==X2 || Y1==Y2 || (X1-X2)== (Y1-Y2) )
         printf("1\n");
      else
         printf("2\n"); n
        */

    }
    return 0;
}
