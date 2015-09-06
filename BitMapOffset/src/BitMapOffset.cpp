//============================================================================
// Name        : BitMapOffset.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 1. Use #define
// 2. use left shift operator for multiplication by 2.
// 3. Use right shift operator for division by 2
// 4. Makes sure function has valid arguments (assert function)
// 5. modulo division could be done by ANDing with 1.
// 6. avoid conditional operator

#define X_SIZE 640
#define Y_SIZE 480

long bm_offset( int x, int y )
{
	assert ((0 < x) && (x < X_SIZE) && (0 < y) && (y < Y_SIZE)) ;
	return (X_SIZE* (long)(y- (y&1)) + (y&1) + (x<<1) + (x&1));
}

int main()
{
    printf("the bm_offset is %ld",bm_offset(2,3));
	return 0;
}
