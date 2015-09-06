//============================================================================
// Name        : comparison.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
#include<math.h>

int main()
{
  int a,b,c,d,temp;
  printf("enter a and b:");
  scanf("%d%d",&a,&b);
  c=a-b;
  d=abs(c);
  temp=c+d;
  if (c==0) printf("a is equal to b");
  else if(temp==0) printf("a is smaller than b");
  else printf("a is bigger than b");
  printf("%d",d);
  return (0);
}
