//============================================================================
// Name        : tic_tac_toe.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

bool finish_tic_tac_toe(int **arr, int x, int y)
{
    int i;int j;
    for (i = 0; i < 3; ++i)
    {
    	if (((arr[i][0] + arr[i][1]) == 9 || (arr[i][0] + arr[i][1]) == 11) || ((arr[i][1] + arr[i][2]) == 9 || (arr[i][1] + arr[i][2]) == 11) || ((arr[i][0] + arr[i][2]) == 9 || (arr[i][0] + arr[i][2]==11))
    	{
    		y = i;

    		return true;
    	}
    	if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]))
    	{


    	}

    }
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
