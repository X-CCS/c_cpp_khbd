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

void shellSort(int *a, int len)
{
	int i = 0;
	int j = 0;
	int step = len/2;
	int tmp = 0;

	while(step >= 1)
	{
		//插入排序
		for(i = step; i < len; i++)
		{
			tmp = a[i];	//设置哨兵
			for(j = i - step; j >= 0; j -= step)
			{
				if(tmp < a[j])
				{
					a[j+step] = a[j];
				}
				else
				{
					break;
				}
			}
			a[j+step] = tmp;
		}

		step /= 2;	//调整步进
	}
}

int main()
{
	int a[] = {65, 38, 97, 76, 13, 27, 49, 18};
	int len = sizeof(a)/sizeof(a[0]);

	printf("Before sort:\n");
	printArr(a, len);

	shellSort(a, len);

	printf("\nAfter sort:\n");
	printArr(a, len);

	return 0;
}
