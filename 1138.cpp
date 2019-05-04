#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x,y,a,b,c,d,e,f,g,h,i,j,k,s,p;
    while(scanf("%d %d",&x,&y) && x!=0 && y!=0)
    {
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;
        h=0;
        i=0;
        j=0;
        for(p=x; p<=y; p++)
        {       k=p;
            while(k>0)
            {
                s=k%10;
                if(s==0) a+=1;
                else if(s==1) b+=1;
                else if(s==2) c+=1;
                else if(s==3) d+=1;
                else if(s==4) e+=1;
                else if(s==5) f+=1;
                else if(s==6) g+=1;
                else if(s==7) h+=1;
                else if(s==8) i+=1;
                else if(s==9) j+=1;
                k/=10;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<endl;
    }
    return 0;
}
