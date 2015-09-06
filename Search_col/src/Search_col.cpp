//============================================================================
// Name        : Search_col.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int sum_in_row(int a[][5], int row, int col)
{
	int sum = 0;int i;
	for(i=0;i<col; i++)
	{
		sum = sum + a[row][i];
	}
	return sum;
}
int main() {

		int a[6][5] = {
				{2,54,22,4,8},
				{5,23,51,92,1},
				{3,21,7,9,26},
				{34,53,6,61,90},
				{82,44,82,39,71},
				{36,47,28,94,84}
		};
		int result;
		result = sum_in_row(a,0,5);
		printf("Sum of the specific row is %d",result);

}
