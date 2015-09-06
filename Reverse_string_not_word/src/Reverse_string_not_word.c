/*
 ============================================================================
 Name        : Reverse_string_not_word.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(char * string);

int main(void)
{
	char string[100] = "Bhavya is good";

	reverse(string);
	printf("the reversed string is: %s",string);
	reverse_only_words(string);
	printf("The reversed string with ordered words are: %s", string);
	return 0;
}

void reverse(char * string)
{
	char *front = string;
	char* end = string;
	char temp;
	int c;

	int stringLength;

	//	while (*(string + string_length) != '\0')
	//	{
	//		string_length = stringLength + 1;
	//
	//	}
	while (*(end++));
	stringLength = end - string;
	end -= 2;



	//	// we make only end point to the last character in the string
	//	for (c = 0; c < stringLength - 1; c++)
	//		end++;

	// we do the exchange of first and last character
	for (c = 0; c < stringLength/2; c++)
	{
		temp   = *end;
		*end   = *front;
		*front = temp;

		front++;
		end--;
	}
}

void reverse_only_words(char * string)
{
	int i;
	for (i = 0; i != '\0'; i++)
	{
		if (string[i+1] != '')
		{
			char *front = string;
			char* end = string[i];
			//end -= 2;
			char temp;
			int c;

			int stringLength;

			while (*(end++));
			stringLength = end - string;
			end -= 2;


			for (c = 0; c < stringLength/2; c++)
			{
				temp   = *end;
				*end   = *front;
				*front = temp;

				front++;
				end--;
			}
		}
	}

}

reverse_entire_string(*string)
{
	char *start = string;
	char *end = string;
	while (*(end++));
	end -= 2;

	reverse (start, end);

	char *word_start = string;
	char *word_end = string;
	end = string;

	while (*end != '\0')
	{
		while ((*word_end != ' ') && (word_end != '\0'))
		{
			word_end++;
		}
		if (*end == '\0') return;
		end = word_end;

		end -=2;
		reverse(word_start, word_end);
		word_start = end;
		word_end = end;
	}

}

reverse(char *start, char *end)
{
	while (start < end)
	{
		char tmp = *end;
		*end = *start;
		*start = tmp;
	}
}


