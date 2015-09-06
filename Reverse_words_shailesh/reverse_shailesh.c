/*
 * reverse_shailesh.c
 *
 *  Created on: Jan 21, 2015
 *      Author: Bhavya
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_word(char* string, int strlength)
{

	int start = 0;
	int end = strlength - 1;
	char temp;
	for (start=0; start < end ; start++, end--)
	{
		temp = string[start];
		string[start] = string[end];
		string[end] = temp;

	}
}

void reverse(char* string)
{
	int front =0 ;
	int end = 0;
	int strlength;

	while(1)
	{
		//if it reaches the end of the word it must reverse it
		if ((*(string + end) == ' ') || (*(string + end) == '\0'))
		{
			strlength = end - front;
			reverse_word((string + front), strlength);

			if (*(string + end) == '\0')
			{
				break;
			}
            else if (*(string + end) == ' ')
            {
				front = front + strlength + 1;
				end++;
            }
		}
        else
        {
        	end++;
        }
	}
}


int main(void)
{
	char string[100] = "Bhavya is good";
	char *string1 = string;
	int c = 0;
	while (*(string1++))

	{
		c++;
	}
	reverse_word(string,c);
	printf("The reversed string is: %s\n",string);
	reverse(string);
	printf("The reversed words are: %s\n",string);
	return 0;
}

