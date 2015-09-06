/*
 * ITC_problem5.c
 *
 *  Created on: Feb 24, 2015
 *      Author: Bhavya
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>


// h(x) = -plog(p) - (1-p)log(1-p)
// v1 = n(h(x) + e)
// upper_bound= 2^v1
//
// v2 = n(h(x) - e)
// lower bound = (1-e)2^v2

struct Bounds
{
	float upper_bound;
	float lower_bound;
};

void SetSize(int n, float p, float e, struct Bounds *bound)
{
	float h = -p * log2(p) - (1.0 - p) * log2(1.0 - p);
	float v1 = n * (h + e);
	bound->upper_bound = pow(2.0, v1);
	float v2 = n * (h - e);
	bound->lower_bound = (1 - e) * pow(2.0, v2);

//	printf("\nh = %f, v1 = %f, v2 = %f", h, v1, v2);
}

int main(void)
{
	struct Bounds bound = {0,0};

	int n = 0;
	float p = 0.0;
	float e = 0.0;

	n = 15;
	p = 0.2;
	e = 0.05;
	SetSize(n, p, e, &bound);
	printf("\nn = %d, p = %f, e = %f, upper_bound = %f, lower_bound = %f\n", n, p, e, bound.upper_bound, bound.lower_bound);

	n = 15;
	p = 0.2;
	e = 0.1;
	SetSize(n, p, e, &bound);
	printf("\nn = %d, p = %f, e = %f, upper_bound = %f, lower_bound = %f\n", n, p, e, bound.upper_bound, bound.lower_bound);

	n = 15;
	p = 0.2;
	e = 0.15;
	SetSize(n, p, e, &bound);
	printf("\nn = %d, p = %f, e = %f, upper_bound = %f, lower_bound = %f\n", n, p, e, bound.upper_bound, bound.lower_bound);

	float a = 0.1;
	float b = 0.4;
	float c = 0.1;
	float d = 0.4
			;
	//float e1 = 0.2;
	//float f = 0.2;
	//float g = 0.2;

	float entrpy;
	entrpy = (-a * log2(a) - b * log2(b) -c*log2(c) -d*log2(d));

	printf("entropy is %f",entrpy);
	return 0;
}
