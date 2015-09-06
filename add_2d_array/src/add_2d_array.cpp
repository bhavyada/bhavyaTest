#include <stdio.h>

int max_element(int a[][5]);


int main(void)
{

   int a[][5] = {
   { 2, 7, 6, 8, 4},
   {3, 9, 1, 5, 6},
   {3,5,1,6,7},
   {88,34,2,13,4},
   {91,22,76,2,9},
   {83,39,27,40,81}
   };

   int max1;
   max1 = max_element(a);

   printf("Max: %d\n", max1);

   return 0;
}

int max_element(int a[][5])
{
   int i,j;
   int mymax = a[0][0];

   for(i = 0; i < 6; i++)
      for(j = 0; j < 5; j++)
         if(a[i][j] > mymax)
         {
            mymax = a[i][j];
         }
   return mymax;
}

