#include <stdio.h>

void printArr(int *a, int len)
{
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void quickSort(int *a, int low, int high)
{
	int i = low;
	int j = high;
	int key = a[low];

	if(low >= high)
		return;

	while(low < high)
	{
		while(low < high && key <= a[high])
		{
			high--;
		}
		if(key > a[high])
		{
			swap(&a[low], &a[high]);
			low++;
		}

		while(low < high && key >= a[low])
		{
			low++;
		}
		if(key < a[low])
		{
			swap(&a[low], &a[high]);
			high--;
		}
	}

	quickSort(a, i, low - 1);
	quickSort(a, low + 1, j);
}

int main()
{
	int a[] = {65, 38, 97, 76, 13, 27, 49};
	int len = sizeof(a)/sizeof(a[0]);

	printf("Before sort:\n");
	printArr(a, len);

	quickSort(a, 0, len - 1);

	printf("\nAfter sort:\n");
	printArr(a, len);

	return 0;
}
