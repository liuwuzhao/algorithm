#include <stdio.h>

#define SEARCH_SIZE 10



int binSearch(int a[], int len, int key)
{
	int begin = 0;
	int end = len - 1;
	int mid = (begin + end) / 2;
	
	while(begin <= end)
	{
	
		if(a[mid] == key)
			return mid;
		else if(a[mid] < key)
		{
			begin = mid + 1;
			mid = (begin + end) /2;
		}
		else
		{
			end = mid - 1;
			mid = (begin + end) / 2;
		}
	}
	
	return begin;
}
	


int main(int argc, char **argv)
{
	int i;
	int key;
	int arr[SEARCH_SIZE];
	
	for(i = 0; i < SEARCH_SIZE; i++)
	{
		arr[i] = i*2;
	}
	
	while(1)
	{
		scanf("%d:", &key);
		printf("search %d index %d\n", key, binSearch(arr, SEARCH_SIZE, key));
	}
	
	
}
