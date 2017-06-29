void quickSort(int A[], int p, int r)
{
	int q;
	if(p < r)
	{
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

int partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p - 1;
	int j;
	int temp;
	
	for(j = p; j <= r -1; j++)
	{
		if(A[j] <= x)
		{
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	
	temp = A[i+1];
	A[i+1] = A[r];
	A[r] = temp;
	
	return i+1;

}


int main(int argc, char **argv)
{
	int i = 0;
	int A[10] = {8,4,6,2,1,3,5,7,10,9};
	quickSort(A, 0 , 9);
	
	for(i = 0; i < 10; i++)
		printf("%d\n", A[i]);
}
