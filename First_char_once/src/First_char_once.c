/*
 ============================================================================
 Name        : First_char_once.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char FirstNotRepeatingChar(char* pString)
{
    if(pString == NULL)
        return ('/0');

    const int tableSize = 256;
    unsigned int hashTable[tableSize];
    for(unsigned int i = 0; i<tableSize; ++ i)
        hashTable[i] = 0;

    char* pHashKey = pString;
    while(*(pHashKey) != '\0')
        hashTable[*(pHashKey++)] ++;

    pHashKey = pString;
    while(*pHashKey != '\0')
    {
        if(hashTable[*pHashKey] == 1)
            return (*pHashKey);

        pHashKey++;
    }

    return ('\0');
}
int main(void) {
	char* string1[] = "aabccdeffegghijii";
	FirstNotRepeatingChar(string1);
}
