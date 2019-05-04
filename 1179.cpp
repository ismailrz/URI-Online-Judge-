//#include<stdio.h>
//int main()
//{
//    int i,A[10],B[10],M[15],j=0,k=0,p,n;
//    for(i=0;i<15;i++){
//        scanf("%d",&M[i]);
//    }
//    for(i=0;i<15;i++){
//        if(M[i]%2==0){
//            A[j]=M[i];
//            j++;
//        }
//        else{
//            B[k]=M[i];
//            k++;
//        }
//    }
//    for(p=0;p<j;p++){
//        if(p==5){
//            for(i=0;i<k;i++){
//                    if(i>=5){
//                       printf("impar[%d] = %d\n",i-5,B[i]);
//                        continue;
//                    }
//                printf("impar[%d] = %d\n",i,B[i]);
//            }
//        }
//        if(p>=5){
//            printf("par[%d] = %d\n",p-5,A[p]);
//            continue;
//        }
//        printf("par[%d] = %d\n",p,A[p]);
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[15],B[15],a,j=0,k=0,i;
    for(i=0;i<15;i++){
        cin>>a;
        if(a%2==0){
            A[j++]=a;
        else
            B[k++];
        if(j>5) continue;
        else if(j==5){
            for(i=0;i<5;i++)
              printf("par[%d] = %d\n",i,A[i]);
        }
        if(k>5) continue;
        else if(k==5){
            for(i=0;i<5;i++)
              printf("impar[%d] = %d\n",i,B[i]);
        }

    }
    for(i=5;i<j;i++)
         printf("par[%d] = %d\n",i,A[i]);
    for(i=5;i<k;i++)
         printf("par[%d] = %d\n",i,B[i]);

    return 0;
}















