#include <stdio.h>
#include <stdlib.h>
#define N 7
void show(int *p)
{
	printf("\n");
	for (int i = 0;i < N;i++)
	{
		printf("%3d", p[i]);
	}
}
void merge(int *p, int first, int mid, int last)
{
	int *ptemp = calloc(last - first + 1, sizeof(int));//开辟临时空间
	int left_first = first;
	int left_last = mid;
	int right_first = mid + 1;
	int right_last = last;
	int k;
	for (k = 0;left_first <= left_last&&right_first <= right_last;k++)
	{
		if (p[left_first] <= p[right_first])
		{
			ptemp[k] = p[left_first];
			left_first++;
		}
		else
		{
			ptemp[k] = p[right_first];
			right_first++;//选择一个最小的
		}

	}
	if (left_first <= left_last)
	{
		for (int i = left_first;i <= left_last; i++)
		{
			ptemp[k] = p[i];
			k++;             //如果第一个有剩余
		}
	}
	if (right_first <= right_last)
	{
		for (int j = right_first;j <= right_last; j++)
		{
			ptemp[k] = p[j];
			k++;
		}
	}
	for (int i = 0;i < last - first + 1;i++)
	{
		p[first + 1] = ptemp[i]; //排序完拷贝
	}
	free(ptemp);
}

void merge_sort(int*p, int first, int last)
{
	int mid = 0;
	if (first < last)
	{
		mid = (first + last) / 2;
		merge_sort(p, first, mid);
		merge_sort(p, mid + 1, last);
		merge(p, first, mid, last);//递归切割
	}
}


void main()
{
	int a[N] = { 33,13,57,19,71,47,38 };
	show(a);
	merge_sort(a, 0, 6);
	show(a);
	getchar();
}