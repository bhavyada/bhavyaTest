//============================================================================
// Name        : Count_repeated_words.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

void delete_same_words(char** s, int count)
{
	for (int i = 0; i < count; ++i )
	{
		**s = ' ';
		++(*s);
	}
	while (**s == ' ')
	{
		++(*s);
	}
}

int check_word_same(char* s1, char* s2)
{
	int count = 0;
	while((*s1 != ' ') && (*s2 != ' ') && (*s2 != '\0'))
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
			count++;
		}
		else
		{
			return 0;
		}
	}
	return count;
}

char* go_to_next_word(char **s)
{
	while (((**s >= 'a') && (**s <= 'z')) || ((**s >= 'A') && (**s <= 'Z')))
	{
		(*s)++;
	}
	while (**s == ' ')
	{
		(*s)++;
	}
	return *s;
}

void print_word(char *s)
{
	while (*s != ' ')
	{
		printf("%c", *s);
		++(s);
	}
	printf (" ");
}

void number_of_times(char* s)
{
	char* s1 = s;
	char* s2;
	int no_of_repeat = 1;

	while (*s1 != '\0')
	{
		if ((*s1 < 'a') && (*s1 > 'z') && (*s1 < 'A') && (*s1 > 'Z'))
		{
			go_to_next_word(&s1);
		}
		s2 = s1;
		go_to_next_word(&s2);

		while (*s2 != '\0')
		{
			int count = check_word_same(s1, s2);
			if (count > 0)
			{
				no_of_repeat++;
				delete_same_words(&s2, count);

			}
			else
			{
				go_to_next_word(&s2);
			}
		}
		print_word(s1);
		printf("%d\n", no_of_repeat);
		no_of_repeat = 1;
		go_to_next_word(&s1);
	}
}


int main(void)
{
	char myString[] = "green apple green mango green chilli red chilli";
	printf("The number of repeated words: \n");
	number_of_times(myString);
	return 0;
}


