#include<stdio.h>
#include<Windows.h>

void quicksort(int left, int right, int a[]);

void quicksort(int left, int right,int a[])//时间复杂度O（nlog^n)
{
	
	int temp, i, j;
	if (left > right)
		return;
	else
	{
		temp = a[left];
		i = left;
		j = right;
		while (i != j)
		{
			while (j > i&&a[j] >= temp)
				j--;
			while (i < j&&a[i] <= temp)
				i++;

			if (i < j)
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		a[left] = a[i];
		a[i] = temp;




		quicksort(left, i - 1, a);
		quicksort(i + 1, right, a);
		return;
	}
}

void main()
{
	int a[5] = { 7,6,8,4,3 };
	quicksort(0, 4, a);
	for (int i = 0;i < 5;i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}