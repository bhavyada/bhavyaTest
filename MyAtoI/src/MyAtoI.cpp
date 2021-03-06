//============================================================================
// Name        : MyAtoI.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

int MyAtoI(char *aString)
{
	int i = 0;
	int num = 0;int signbit = 1;
	while(aString[i] != '\0')
	{
		if (aString[i] == '-')
		{
			signbit = -1;
		}
		else if ((aString[i] >= '0') && (aString[i]<= '9'))
		{
			num = (num * 10) + (aString[i] - '0');
		}
		else
		{
			printf("Error");
			return 0;
		}

		i++;
	}
	return num*signbit;
}

int main()
{
	char *myStr = ("1234");

	printf("MyAtoI: %d\n", MyAtoI(myStr));

	myStr = (char *)("-1234");
	printf("MyAtoI: %d\n", MyAtoI(myStr));

	myStr = (char *)("1a234");
	printf("MyAtoI: %d\n", MyAtoI(myStr));

	return 0;
}
