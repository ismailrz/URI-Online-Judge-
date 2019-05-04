#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    double S,Square=0,Sum=0;
    cin>>n;
   S=(1.0+(1.0/(2+(1.0/2))));
   //S=sqrt(n);
    for(int i=1;i<n;i++){
       Square= sqrt(S);
       S=Square;
       //Sum+=Square;
    }
    printf("%.10lf\n",Square);
    return 0;
}
