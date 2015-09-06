#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Array
{
	char *str;
	int index;
};

struct Dup_array
{
	struct Node* Array;
	int size;
};

int main()
{
	char word_arr[] = {"logarithm", "algorithm", "steal","least", "slate","instead","stained"};
	int size = sizeof(word_arr)/sizeof(word_arr[0]);
	print_all_anagrams(word_arr, size);
}
