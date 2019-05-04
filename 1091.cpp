#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,n,m,x,y,i;
    while(scanf("%d",&N)!=EOF && N!=0){
        cin>>n>>m;
        for(i=0;i<N;i++){
            cin>>x>>y;
            if(x==n || y==m)
                cout<<"divisa"<<endl;
            else if(x>n && y>m)
                cout<<"NE"<<endl;
            else if(x<n && y<m)
                cout<<"SO"<<endl;
            else if(x<n && y>m)
                cout<<"NO"<<endl;
            else if(x>n && y<m)
                cout<<"SE"<<endl;

        }
    }
    return 0;
}
