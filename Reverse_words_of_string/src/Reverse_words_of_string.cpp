//============================================================================
// Name        : Reverse_words_of_string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void reverse(char *front, char *back)
{
	char temp;
	while (front < back)
	{
		temp = *front;
		*front = *back;
		*back = temp;
		front++;
		back--;
	}

}

char* reverse_string(char *begin)
{
	char *front = begin;
	char* back = front;
	while (true)
	{
		back = front;
		while((*back != '\0') && (*back != ' '))
		{
			back++;
		}
		reverse(front, back-1);
		if (*back == '\0')
		{
			break;
		}
		else
		{
			front = back+1;
		}
	}
	reverse(begin, back-1);
	return begin;
}


int main() {
	char mystr[] = "Bhavya weds Shailesh";
	//int length = strlen(mystr);
	printf("The correct order is %s\n",mystr);
	printf("The reverse order is %s\n",reverse_string(mystr));
	return 0;
}
