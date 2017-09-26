#include<stdio.h>
#include<Windows.h>
void main()//时间复杂度O(n^2)
{
	int a[5] = { 7,8,6,4,3 };
	for (int i = 1;i < 5;i++)
	{
		int temp = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > temp)//a[j]被覆盖，用temp防止覆盖
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;

	}
	for (int z = 0;z < 5;z++)
	{
		printf("%d", a[z]);
	}
	getchar();
}