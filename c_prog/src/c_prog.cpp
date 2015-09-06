#include<stdio.h>
int main()
{
	int k = 5;
	for(int i=0; i<5; i++)
	{
		while(k >= 1)
		{
			for(int j =k; j>=1;j--)
			{
				printf("*");

			}
			printf("\n");
			k--;

		}
	}
	return 0;
}
