#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int T,S1,S2,a,b,c,d,x,y,i;
    char ch;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%*c%*c%d%*c%c%d%*c%*c%d",&a,&b,&ch,&c,&d);

        if(ch=='+')
        {
            S1=a*d+c*b;
            S2=b*d;
            x=S1;
            y=S2;
            for(i=2; i<=min(x,y); i++)
            {
                if(x%i==0 and y%i==0)
                {
                    x/=i;
                    y/=i;
                }
            }

        }
        else if(ch=='-')
        {
            S1=a*d-c*b;
            S2=b*d;
            x=S1;
            y=S2;
            for(i=2; i<=min(x,y); i++)
            {
                if(x%i==0 and y%i==0)
                {
                    x/=i;
                    y/=i;
                }
            }
        }
        else if(ch=='*')
        {
            S1=a*c;
            S2=b*d;
            x=S1;
            y=S2;
            for(i=2; i<=min(x,y); i++)
            {
                if(x%i==0 and y%i==0)
                {
                    x/=i;
                    y/=i;
                }
            }
        }
        else if(ch=='/')
        {
            S1=a*d;
            S2=b*c;
            x=S1;
            y=S2;
            for(i=2; i<=min(x,y); i++)
            {
                if(x%i==0 and y%i==0)
                {
                    x/=i;
                    y/=i;
                }
            }
        }

        printf("%d/%d = %d/%d\n",S1,S2,x,y);
    }
    return 0;
}
