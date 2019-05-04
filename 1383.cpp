//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//    int A[10][10],i,j,Sum1,Sum2,k=1,ck,T;
//    scanf("%d",&T);
//    while(T--)
//    {
//        for(i=0; i<9; i++)
//        {
//            for(j=0; j<9; j++)
//                scanf("%d",&A[i][j]);
//        }
//        ck=0;
//        for(i=0; i<9; i++)
//        {
//            Sum1=0;
//            Sum2=0;
//            for(j=0; j<9; j++)
//            {
//                Sum1+=A[i][j];
//                Sum2+=A[j][i];
//            }
//            if(Sum1!=45 || Sum2!=45)
//            {
//                ck=1;
//                break;
//            }
//        }
//        printf("Instancia %d\n",k++);
//        if(ck==0)
//            printf("SIM\n\n");
//        else
//            printf("NAO\n\n");
//    }
//    return 0;
//}
#include <stdio.h>

int sudoku[9][9];

bool checkRepetitions(int sudoku[9][9])
{
   int i, j, k, tmp;

   for (i = 0; i < 9; ++i)
   {
      for (j = 0; j < 9; ++j)
      {
         tmp = sudoku[i][j];

         for (k = j + 1; k < 9; ++k)
            if(sudoku[i][k] == tmp)
               return false;

         for (k = i + 1; k < 9; ++k)
            if(sudoku[k][j] == tmp)
               return false;
      }
   }

   return true;
}

bool checkSum(int sudoku[9][9])
{
   int i, j, k, l, c;

   for (i = 0; i < 9; ++i)
   {
      l = 0; c = 0;

      for (j = 0; j < 9; ++j)
         l += sudoku[i][j];

      for (j = 0; j < 9; ++j)
         c += sudoku[j][i];

      if(l != 45 || c != 45)
         return false;
   }

   return true;
}

int main(int argc, char const *argv[])
{
   int n, x, c = 1, i, j;
   bool b, p = false;

   scanf("%d", &n);

   while(n--)
   {
      if(p) printf("\n");
      p = true; b = true;

      for (i = 0; i < 9; ++i)
         for (j = 0; j < 9; ++j)
            scanf("%d", &sudoku[i][j]);

      b = checkRepetitions(sudoku);
      b = checkSum(sudoku);

      printf("Instancia %d\n", c); c++;
      printf(b ? "SIM\n" : "NAO\n");
   }

   return 0;
}
