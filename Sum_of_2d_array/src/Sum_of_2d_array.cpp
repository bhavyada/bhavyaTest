//============================================================================
// Name        : Sum_of_2d_array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int find_sum(int a[][5], int row)
{
	int i,j;int sum =0;
	for (i =0; i<row; i++)
	{
		for(j=0; j< 5; j++)
		{
			sum = sum + a[i][j];
		}
	}
	return sum;
}


int main() {
	int a[][5] = {
			{9,4,38,91,23},
			{8,9,22,8,12},
			{89,65,45,92,87},
			{7,9,4,6,1},
			{57,8,4,2,6},
			{82,1,23,34,72}
			};
	int result;
	result = find_sum(a,5);
	printf("%d",result);
	return 0;
}
