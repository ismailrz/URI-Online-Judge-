#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char S[100];
    int i,j,C=0,ln,ln2;
    cin>>S;
    ln=strlen(S);
    if(ln%2)
        ln2=ln+1;
    for(i=0,j=1;i<=ln2/2;i++,j++){
        if(S[i]==S[j])
                C++;
    }
    cout<<(pow(2,ln))-C<<endl;
    return 0;
}
