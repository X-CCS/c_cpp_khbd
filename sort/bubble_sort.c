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

void bubbleSort(int *a, int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int flag = 0;	//冒泡排序优化标志位

	for(i = 0; i < len - 1; i++)
	{
		flag = 0;
		for(j = 0; j < len - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

				flag = 1;
			}
		}

		if(flag == 0)
			break;

#if 1	//打印每一轮排序的过程
		printf("Sort %d:\n", i);
		printArr(a, len);
#endif
	}
}

int main()
{
	int a[] = {65, 38, 97, 76, 13, 27, 49};
	int len = sizeof(a)/sizeof(a[0]);

	printf("Before sort:\n");
	printArr(a, len);
	printf("\n");

	bubbleSort(a, len);

	printf("\nAfter sort:\n");
	printArr(a, len);

	return 0;
}
