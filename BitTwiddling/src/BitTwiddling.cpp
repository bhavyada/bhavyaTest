//============================================================================

// Name        : BitTwiddling.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

#define NUM_BITS 32
#define NUM_BITS_MASK 0xFFFFFFFF
#define MASK1 1

//0xA : 10101000
//0x9 : 10100111


//0x56: 0101 0110: 4
// assume num is 32 bits long
int NumBitsSet(unsigned int num)
{
	int count = 0;

	while(num)
	{
		num &= (num--);
		count++;
	}
	return count;
}

bool GetParity(unsigned int num)
{
	bool parity = 0;
	while(num)
	{
		parity = parity ^ (num & 1);
		num = num>>1;
	}
	return parity;
}

bool GetParityDividing(unsigned int num)
{
	unsigned int f_half, s_half;
	unsigned int half_bits = NUM_BITS/2;
	unsigned int mask_bits = NUM_BITS_MASK >> half_bits;

	while (num && half_bits)
	{
		f_half = num >> half_bits;
		s_half = num & mask_bits;
		num = f_half ^ s_half;
		half_bits /= 2;
		mask_bits >>= half_bits;
	}
	return (bool)num;
}

int main()
{
	int number = 0x05;
	printf("Num bits set in %d: %d\n", number, NumBitsSet(number & NUM_BITS_MASK));
	printf("Parity 0x%x: %d\n", number, (int)GetParity(number & NUM_BITS_MASK));
	printf("Parity 0x%x: %d\n", number, GetParityDividing(number) ? 1 : 0);
	return 0;
}
