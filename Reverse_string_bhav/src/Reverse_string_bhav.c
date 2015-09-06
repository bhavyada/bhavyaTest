/*
 ============================================================================
 Name        : Reverse_string_bhav.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev_string(char * string, char *desti)
{

	char* src = string;
    int len =0;


	while(*src != '\0')
	{
		src++;
		len++;
	}

	while(len >0)
	{
		src--;
	*desti = *src;

	desti++;
	len--;
	}
	*desti = '\0';
}

char* display(char *str,int len)
{
	char * temp = str;
	temp = temp + len;
		*temp = '\0';
		return str;
}
void reverse_words(char *string, char* destination)
{
	char * current = string;int len =0;
	//char desti[50];
	char* dest = destination;
	int next = 0;
	char*(*ptr)(char*,int);

	while(1)
	{
		len = 0;
		while ((*current != ' ') && (*current != '\0'))
		{
			current++;
			len++;
		}


		ptr = &display;
		string = (*ptr)(string,len);
		rev_string(string, dest + next);
        *(dest+next+len) = ' ';
		string = string + len + 1;
		current = string;
		next = next + len + 1;

//		if ((*current) == ' ')
//		{
//			next = next + len + 1;
//		}
		if ((*current) == '\0')
		{

			break;
		}

	}

}

int main(void)
{
	char word[20] = "Bhavya is good";

	char destin[20];
	rev_string(word, destin);
	printf("%s",destin);
	char destination[20];
	reverse_words(destin,destination);
	printf("\n%s",destination);
	return 0;
}
