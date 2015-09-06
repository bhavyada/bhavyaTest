//============================================================================
// Name        : BracketParsing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// "{1,4,6,2,.......}"
// '{' '1' ',' '4' ',' '6' ',' '2' ',' '9' '}' \0
// x = c - '0'
// assert ( (c <= '9') && (c >= '0'))
// 1 4 6 2 ......

#define MAX_SIZE 100

enum E_State
{
	eStart,
	eNumb,
	eComma,
	eEnd,
	eInvalid
};

int convert_atoi(char mychar)
{
	//to get the the integer subtract the char with '0'
	// repeat it for every element of the string
	int num;
	num = mychar - '0';
	return num;

}

int BracketParse(char *myStr, int *myArr)
{
	E_State ParseState = eStart;
	char *current = myStr;
	while (((*current) != '\0') && (ParseState != eInvalid))
	{
		assert ((((*current) <= '9') && ((*current) >= '0')) || ((*current) == ',')  || ((*current) == '}'));

		switch (ParseState)
		{
			case eStart:
			{
				assert ((*current) =='{');
				ParseState = eNumb;
				break;
			}
			case eNumb:
			{
				assert (((*current) <= '9') && ((*current) >= '0'));
				*myArr = convert_atoi(*current);
				printf("the characters in the number are %d\n", *myArr);
				myArr++;
				ParseState = eComma;
				break;
			}
			case eComma:
			{
				assert ((*current == ',')) ;
				if ((*current == ','))
				{
					ParseState = eNumb;
				}
				if ((*current == '}'))
				{
					ParseState = eEnd;
				}
				break;
			}
		}
		current = current++;
	}

}


int main()
{
	int myArr[MAX_SIZE];
	int size = BracketParse("{1,4,6,2,9}", myArr);
	for (int i = 0; i < size; ++i)
	{
		printf("\n%d ", myArr[i]);
	}
	return 0;
}
