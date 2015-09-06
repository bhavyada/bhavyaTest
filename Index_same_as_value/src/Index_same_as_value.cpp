//============================================================================
// Name        : Index_same_as_value.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int ArrIndexValueSame(int *arr, int size)
{
	assert(arr != NULL);
	int index = 0;
	while (index < size)
	{
		if (arr[index] == index)
		{
			return index;
		}
		else
		{
			index++;
		}
	}
	return -1;
}

int ArrIndexValueSameBinary(int *arr, int size)
{
     int front, end, middle;
     int index = 0;
     front = 0;
     end = size -1;
     middle = (front + end)/2;

     while (front <= end)
     {
    	 index = middle;
         if (arr[middle] < index)
         {
        	 front = middle +1;
         }
         else if (arr[middle] > index)
         {
             end = middle - 1;
         }
         else if (arr[middle]== index)
         {
        	 return middle;
         }
         middle = (front+end)/2;
     }
return middle;
}

int main()
{
	int myArr[] = {-5, -1, 0, 2, 3, 5, 6};
//	int *myArr = NULL;
	printf("Array Index value find\n");
	printf("Index and value same at %d\n", ArrIndexValueSame(myArr, sizeof(myArr)/sizeof(int)));
	printf("Index and value same at %d\n", ArrIndexValueSameBinary(myArr, sizeof(myArr)/sizeof(int)));
	return 0;
}
