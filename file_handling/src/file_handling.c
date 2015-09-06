/*
 ============================================================================
 Name        : file_handling.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

struct Facebook
{
	char* FirstName;
	char* LastName;
	char* email;
	int age;
};

int main()
{
   FILE * fp;
   struct Facebook fb;
   fb.FirstName = "Bhavya";
   fb.LastName = "Dayanand";
   fb.email ="bhavya.dayanand";
   fb.age = 24;

   fp = fopen ("C:/JobSearch/Resume/cover.txt", "w");
   fprintf(fp, "%s %s %s %d", fb.FirstName, fb.LastName, fb.email, fb.age);

   fclose(fp);

   return(0);
}
