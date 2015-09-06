/*
 ============================================================================
 Name        : concatenate_strings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main()
{
  int i=0;
  char string1[] = "bhavya";
  char string2[] = "dayanand";
  char *str1 = string1;
  char *str2 = string2;
  char *str3;

  while(*str1){
      str3[i++]=*str1++;
  }
  while(*str2){
      str3[i++]=*str2++;
  }
  str3[i]='\0';
  printf("After concatenation the string is\n");
  puts(str3);
  return 0;
}

