#include <stdio.h>
void main()//最好情况O(n)  平均情况O（n^2）
{
	int a[5] = { 5,7,4,3,6 };
	for (int i = 1;i < 5;i++)
	{
		for (int j = 0;j < 5 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];

				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i < 5;i++)
	{
		printf("%d\n", a[i]);

	}
	getchar();
	}