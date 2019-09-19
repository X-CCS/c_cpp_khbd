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

//调整大顶堆
void adjustMaxHeap(int *a, int pos, int len)
{
	int child = 0;
	int tmp = 0;

	for(tmp = a[pos]; 2 * pos + 1 <= len; pos = child)
	{
		child = 2 * pos + 1;	//从pos结点的左孩子开始，即 pos * 2 + 1
		if(child  < len && a[child] < a[child + 1])
			child++;	//如果左孩子小于右孩子，child指向右孩子

		if(a[child] > tmp)
			a[pos] = a[child];	//如果子结点大于父结点，那么子结点赋值给父结点
		else
			break;
	}
	a[pos] = tmp;	//将tmp放到最终的位置
}

//大顶堆排序
void maxHeapSort(int *a, int len)
{
	int i = 0;

	//1. 构建大顶堆
	for(i = len/2 - 1; i >= 0; i--)
	{
		adjustMaxHeap(a, i, len - 1);	//从第一个非叶子结点从下至上，从右至左调整
	}

	//2. 交换堆顶和末尾元素，并调整大顶堆
	for(i = len - 1; i > 0; i--)
	{
		swap(&a[0], &a[i]);	//交换堆顶和末尾元素
		adjustMaxHeap(a, 0, i - 1);	//调整大顶堆
	}
}

int main()
{
	int a[] = {65, 38, 97, 76, 13, 27, 49};
	int len = sizeof(a)/sizeof(a[0]);

	printf("Before sort:\n");
	printArr(a, len);

	maxHeapSort(a, len);

	printf("\nAfter sort:\n");
	printArr(a, len);

	return 0;
}
