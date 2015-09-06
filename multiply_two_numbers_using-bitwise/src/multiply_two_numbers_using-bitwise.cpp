//============================================================================
// Name        : multiply_two_numbers_using-bitwise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : testing.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<stdio.h>

int add(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // carry now contains common set bits of x and y
        int carry = x & y;

        // Sum of bits of x and y where at least one of the bits is not set
        x = x ^ y;

        // Carry is shifted by one so that adding it to x gives the required sum
        y = carry << 1;
    }
    return x;
}

int main()
{
   int a=7;
   int b=3;
   int result;
  // printf("nEnter the numbers to be multiplied :");
  // scanf("%d%d",&a,&b);         // a>b
   result=0;
   while(b != 0)               // Iterate the loop till b==0
   {
        if (b&01)                // Bitwise &  of the value of b with 01
        {
          result=add(result,a);     // Add a to result if b is odd .
        }
        a<<=1;                   // Left shifting the value contained in 'a' by 1
                                // multiplies a by 2 for each loop
        b>>=1;                   // Right shifting the value contained in 'b' by 1.
   }
   printf("nResult:%d",result);
}

