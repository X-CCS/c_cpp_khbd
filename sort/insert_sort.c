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

void insertSort(int *a, int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;

	for(i = 1; i < len; i++)
	{
		tmp = a[i];
		for(j = i - 1; j >= 0; j--)
		{
			if(tmp < a[j])
			{
				a[j+1] = a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1] = tmp;

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

	insertSort(a, len);

	printf("\nAfter sort:\n");
	printArr(a, len);

	return 0;
}
