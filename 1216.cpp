//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//    double Sum=0;
//    char A[50];
//    int a,i=0;
//    while(scanf("%s %d",A,&a)!=EOF){
//        Sum+=a;
//        i++;
//    }
//    printf("%.1lf",Sum/i);
//    return 0;
//}
#include<stdio.h>
#include<iostream>

int main()
{
    int i=0;
    float media,N,t=0;
    char S[99];

    while(gets(S))
    {

  scanf("%f",&N);
    t=t+N;
    i++;
}

media=t/i;
printf("%.1f\n",media);
}
