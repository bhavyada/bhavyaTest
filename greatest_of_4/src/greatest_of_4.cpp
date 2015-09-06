//============================================================================
// Name        : greatest_of_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int compare(int &a, int &b, int &c, int &d)
{
	int max1 = (a>b)? a:b;
	int max2 = (max1> c)? max1 :c;
	int max3 = (max2 > d)? max2 :d;
	return max3;
}

float compare(float u, float v, float w, float x)
{
	float max1 = (u>v)? u:v;
	float max2 = (max1> w)? max1 :w;
	float max3 = (max2 > x)? max2 :x;
	return max3;
}

int main() {
	int a= 4;
	int b= 8;
	int c= 6;
	int d =3;
	float u = 3.0;
	float v = 4.0;
	float w = 5.6;
	float x = 6.2;

	printf("%d",compare(a,b,c,d));
	printf("%f",compare(u,v,w,x));
}
