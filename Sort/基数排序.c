#include <stdio.h>
#include <stdlib.h>
#define N 10
void show(int *p)
{
	printf("\n");
	for (int i = 0;i < N;i++)
	{
		printf("%3d", p[i]);
	}
}

void tsort(int *p, int length)
{
	int a[10][10] = { 0 };
	for (int i = 0;i < length;i++)
	{
		a[p[i] / 10][p[i] % 10] = p[i];
	}
	int abak[10] = { 0 };
	int t = 0;
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if (a[i][j] != 0)
			{
				p[t] = a[i][j];
				t++;
			}
		}
	}
}


void main()
{
	int a[10] = { 12,18,33,66,88,99,55,67,89,23 };
	show(a);
	tsort(a, 10);
	show(a);
	getchar();
}