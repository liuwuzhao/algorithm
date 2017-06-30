#include <stdio.h>
int insertSort(int A[], int len)
{
	int i = 0;
	int j = 0;
	int key;
	
	for(j = 1; j < len; j++)
	{	
		key = A[j];
		i = j - 1;
		while((i >= 0) && (key < A[i]))
		{
			A[i+1] = A[i];
			i--;
		}
		
		A[i+1] = key;
	}
}


int main(int argc, char **argv)
{
	int i;
	int A[] = {1,4,8,7,5,6,3,2,1,5,6,10,45,84,3};
	int len = sizeof(A)/sizeof(int);
	insertSort(A, len);
	
	for(i = 0; i < len; i++)
		printf("[%d]", A[i]);
}
