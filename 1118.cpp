#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b;
    double a,S;
    while(3){
        gt:
        i=0;S=0;
        while(i<2){
            cin>>a;
            if(a>=0 && a<=10){
                S+=a;
                i++;
            }
            else
                cout<<"nota invalida"<<endl;
        }
        printf("media = %.2lf\n",S/2);
        printf("novo calculo (1-sim 2-nao)\n");
        st:
        cin>>a;
        if(a==2) break;
        else if(a==1)
            goto gt;
        else{
            printf("novo calculo (1-sim 2-nao)\n");
            goto st;
        }

    }
    return 0;
}
