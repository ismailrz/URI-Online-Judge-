#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <sstream>
#include <algorithm>
using  namespace  std;

#define x first
#define y second
#define pb push_back
#define mp make_pair
#define PI (acos(-1.0))
#define mem(a,b) memset(a,b,sizeof(a))
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define FORR(i, b, e) for(int i = b; i >= e; i--)
#define FORI(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define ppr(a) cout<<a.x<<" "<<a.y<<"\n"

typedef  long long ll;
typedef  pair <int, int> pii;
typedef  pair <double , double> pdd;
typedef  vector <int> vi;
typedef  vector <pii> vpii;
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction

#define EPS 1e-9
#define MAX 100007

int h[55];
int v[55];
int main()
{
    //READ("in.in");
    //WRITE("out.out");
    int n,r,c;
    vi ans;
    scanf("%d",&n);
    FOR(i,1,n*n)
    {
        scanf("%d%d",&r,&c);
        if(!h[r]&&!v[c])
        {
            ans.pb(i);
            h[r]=1;
            v[c]=1;
        }
    }
    FOR(i,0,(int)ans.size()-1)printf("%d ",ans[i]);
    return 0;
}
