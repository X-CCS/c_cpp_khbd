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

void selectSort(int *a, int len)
{
	int i = 0;
	int j = 0;
	int min = 0;	//每一轮排序最小数的下标
	int tmp = 0;

	for(i = 0; i < len - 1; i++)
	{
		min = i;
		for(j = i + 1; j < len; j++)
		{
			if(a[min] > a[j])	
			{
				min = j;
			}
		}
		if(min != i)
		{
			tmp = a[min];
			a[min] = a[i];
			a[i] = tmp;
		}

#if 1	//打印每一轮排序的过程
		printf("Sort %d:\n", i);
		printArr(a, len);
#endif
	}
}

int main()
{
	int a[] = {38, 65, 97, 76, 13, 27, 49};
	int len = sizeof(a)/sizeof(a[0]);

	printf("Before sort:\n");
	printArr(a, len);
	printf("\n");

	selectSort(a, len);

	printf("\nAfter sort:\n");
	printArr(a, len);

	return 0;
}
