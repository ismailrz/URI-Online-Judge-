#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,c,ln;
    char ch[1000];
    cin>>T;
    while(T--){
        cin>>ch;
        ln=strlen(ch);
        c=0;
        for(int i=0;i<ln;i++){
            if(ch[i]=='0')
                c+=6;
            else if(ch[i]=='1')
                c+=2;
            else if(ch[i]=='2' || ch[i]=='3' || ch[i]=='5')
                c+=5;
            else if(ch[i]=='4')
                c+=4;
            else if(ch[i]=='6' || ch[i]=='9')
                c+=6;
            else if(ch[i]=='7')
                c+=3;
            else if(ch[i]=='8')
                c+=7;
        }
        cout<<c<<" leds"<<endl;

    }
    return 0;
}
