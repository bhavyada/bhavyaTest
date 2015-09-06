/*
 ============================================================================
 Name        : Fibonacci_trial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int memo[51];

int fib(int n)
{
	if((n == 0) || (n==1))
	{
		return 1;
	}
	if (memo[n] != -1)
	{
		return memo[n];
	}
	else
	{
		memo[n] = fib(n-1) + fib(n-2);
		return memo[n];
	}
}

int main()
{
	int i;int n = 7;

	for(i=0; i< 51; i++)
	{
		memo[i] =-1;
	}
	for (i=0; i<n; i++)
	{
		printf("%d ",fib(i));
	}
	return 0;
}
