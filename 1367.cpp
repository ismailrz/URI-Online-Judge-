//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    char A[300],B[300][10];
//    int n,i,j,S,m,c;
//    while(scanf("%d",&n) && n!=0)
//    {
//        S=0;c=0;
//        for(i=0;i<n;i++){
//            cin>>A[i]>>m>>B[i];
//            for(j=0;j<i;j++){
//                if(A[j]==A[i]){
//                    if(strcmp(B[j],"incorrect")==0)
//                        S-=20;
//                }
//            }
//            if(strcmp(B[i],"correct")==0){
//                S+=m;
//                c++;
//            }
//            else S+=20;
//        }
//        cout<<c<<" "<<S<<endl;
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string result;
    char submission, problem = 'A';
    int time, t = 0, ti = 0, finalTime = 0, corrects = 0, c;
    while (true) {
        scanf("%d", &c);
        if (c == 0)
            break;
        corrects = 0;
        finalTime = 0;
        ti = 0;
        t = 0;
        bool a = 0;
        problem = 'A';
        while (c>0) {
            cin >> submission;
            cin >> time;
            cin >> result;
            if (submission == problem){
                if (result == "incorrect") {
                    if(a == 1){
                        finalTime += 20;
                    } else {
                        ti++;
                    }
                } else {
                    a = 1;
                    finalTime += (time + (ti*20));
                    corrects++;
                }
            } else {
                problem = submission;
                ti = 0;
                a = 0;
                if (result == "incorrect") {
                    ti++;
                } else {
                    finalTime += (time + (ti*20));
                    corrects++;
                }
            }
            c--;
        }
        printf("%d %d\n", corrects, finalTime);
    }
}
