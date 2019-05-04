//#include<stdio.h>
//int main()
//{
//    int T,c=0;
//    double N;
//    scanf("%d",&T);
//    while(T--){
//        scanf("%lf",&N);
//        while(N!=0){
//            N/=2;
//            c++;
//        }
//        printf("%d dias\n",c);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int T,c=0;
    double n,k;
    scanf("%d",&T);
    while(T--){
        scanf("%lf",&k);
        while(k>1){
            k/=2;
            c++;
        }
        printf("%d dias\n",c);
        c=0;
    }
    return 0;
}
