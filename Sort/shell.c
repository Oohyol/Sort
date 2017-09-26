#include <stdio.h>
#include <stdlib.h>
#define N 10
void show(int *p)
{
	printf("\n");
	for (int i = 0;i < N;i++)
	{
		printf("%d", p[i]);
	}
}

void shell_sort(int *p, int length) //可以多线程加速  O(n^1.3)
{
	int d = length / 2;//增量
	while (d >=1)	//增量终止条件
	{
		for (int i = d;i < length&&d < length;i++)
		{
			int x = p[i];
			int j = i - d;
			while (j >= 0&&p[j]>x)
			{
				p[j+d]=p[j];
				j = i - d;
			}
			p[j+d] = x;
		}
		d /= 2;
	}
	
}

void main()
{
	show(p);
	int p[N] = { 7,6,3,2,8,9,5,1,0,4 };
	shell_sort(p, 10);
	show(p);
}