//============================================================================
// Name        : Search_row_and_column.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

bool search_in_row(int a[][5], int row, int key)
{
	int i;
	for(i=0;i<5; i++)
	{
		if(a[row][i] == key)
		{
			return 1;
		}
	}
	return 0;
}


int main() {
	int key = 61;
		int a[6][5] = {
				{2,54,22,4,8},
				{5,23,51,92,1},
				{3,21,7,9,26},
				{34,53,6,61,90},
				{82,44,82,39,71},
				{36,47,28,94,84}
		};
		int result;
		result = search_in_row(a,3,key);
		printf("%s\n",result > 0? "TRUE": "FALSE");

}
