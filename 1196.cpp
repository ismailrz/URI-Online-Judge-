#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    char  A[100];
    gets(A);
    int i;
    for(i=0;i<strlen(A);i++){
        if(A[i]=='=')
            cout<<'-';
        else if(A[i]=='-')
            cout<<'0';

        else if(A[i]=='0')
            cout<<'9';

        else if(A[i]=='9')
            cout<<'8';

        else if(A[i]=='8')
            cout<<'7';

        else if(A[i]=='7')
            cout<<'6';

        else if(A[i]=='6')
            cout<<'5';

        else if(A[i]=='5')
            cout<<'4';

        else if(A[i]=='4')
            cout<<'3';

        else if(A[i]=='3')
            cout<<'2';

        else if(A[i]=='2')
            cout<<'1';

        else if(A[i]=='1')
            cout<<'`';

        else if(A[i]=='`')
            printf("\");

//        else if(A[i]=='\ ')
//            cout<<']';
//
//        else if(A[i]==']')
//            cout<<'[';
//
        else if(A[i]=='[')
            cout<<'P';

        else if(A[i]=='P')
            cout<<'O';

        else if(A[i]=='O')
            cout<<'I';

        else if(A[i]=='I')
            cout<<'U';

        else if(A[i]=='U')
            cout<<'Y';

        else if(A[i]=='Y')
            cout<<'T';

        else if(A[i]=='T')
            cout<<'R';

        else if(A[i]=='R')
            cout<<'E';

        else if(A[i]=='E')
            cout<<'W';

        else if(A[i]=='W')
            cout<<'Q';
//        else if(A[i]==''')
//            cout<<';';

        else if(A[i]==';')
            cout<<'L';

        else if(A[i]=='L')
            cout<<'K';

        else if(A[i]=='K')
            cout<<'J';

        else if(A[i]=='J')
            cout<<'H';

        else if(A[i]=='H')
            cout<<'G';

        else if(A[i]=='G')
            cout<<'F';

        else if(A[i]=='F')
            cout<<'D';

        else if(A[i]=='D')
            cout<<'S';

        else if(A[i]=='S')
            cout<<'A';

        else if(A[i]=='A')
            cout<<'/';

        else if(A[i]=='/')
            cout<<'.';

        else if(A[i]=='.')
            cout<<',';

        else if(A[i]==',')
            cout<<'M';

        else if(A[i]=='M')
            cout<<'N';

        else if(A[i]=='N')
            cout<<'B';

        else if(A[i]=='B')
            cout<<'V';

        else if(A[i]=='V')
            cout<<'C';

        else if(A[i]=='C')
            cout<<'X';

        else if(A[i]=='X')
            cout<<'Z';
        else
            cout<<A[i];

    }
    return 0;
}

