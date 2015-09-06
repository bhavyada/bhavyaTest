//============================================================================
// Name        : search.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Write a program to check whether a string is present in a text. Example bat is present in abate but not beat
#include<stdio.h>
#include<string.h>

bool hasSubstring(const char *str, const char *find)
{
	if (str[0] == '\0' && find[0] == '\0')
		return true;
	for(int i = 0; str[i] != '\0'; i++) {
		bool foundNonMatch = false;
		for(int j = 0; find[j] != '\0'; j++) {
			if (str[i + j] != find[j]) {
				foundNonMatch = true;
				break;
			}
		}
		if (!foundNonMatch)
			return true;
	}
	return false;
}


int main()
{
	char text[] = "abated";
	char find[] = "bat";
	printf("%d",hasSubstring(text,find));

	return 0;

}
