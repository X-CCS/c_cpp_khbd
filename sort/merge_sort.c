#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//打印数组
void PrintArray(int *a, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}

//分组归并
void merge(int *a, int begin1, int end1, int begin2, int end2, int *tmp)
{
	int index = begin1;
	int i = begin1, j = begin2;

	//注意:当划分的区间足够小时,begin1==end1,begin2==end2
	while (i <= end1&&j <= end2){
		if (a[i]<=a[j])
			tmp[index++] = a[i++];
		else
			tmp[index++] = a[j++];
	}
	//将左边元素填充到tmp中
	while (i <= end1)
		tmp[index++] = a[i++];
	//将右边元素填充的tmp中
	while (j <= end2)
		tmp[index++] = a[j++];
	//将tmp中的数据拷贝到原数组对应的序列区间
	//注意:end2-begin1+1
	memcpy(a + begin1, tmp + begin1, sizeof(int)*(end2 - begin1 + 1));
}

//归并排序
void mergeSort(int *a, int left, int right, int *tmp)
{
	if (left >= right)
		return;
	//mid将数组二分
	int mid = left + ((right - left) >> 1);
	//左边归并排序,使得左子序列有序
	mergeSort(a, left, mid, tmp);
	//右边归并排序,使得右子序列有序
	mergeSort(a, mid + 1, right, tmp);
	//将两个有序子数组合并
	merge(a, left, mid, mid + 1, right, tmp);
}

int main()
{
	int a[] = {49, 38, 65, 97, 76, 13, 27};
	int len = sizeof(a)/sizeof(sizeof(a[0]));
	int *tmp = (int *)malloc(sizeof(int) * len);
	memset(tmp, 0, len);

	mergeSort(a, 0, sizeof(a) / sizeof(int)-1, tmp);
	PrintArray(a, sizeof(a) / sizeof(int));

	return 0;
}
