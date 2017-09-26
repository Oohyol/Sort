
#include<stdio.h>
#include<Windows.h>

void main()//时间复杂度O(M+N)
{
	int ch, n;
	int a[101];
	for (int i = 0;i < 100;i++)
		a[i] = 0;
	scanf("%d", &n);
	for (int i = 0;i <=n;i++)
	{
		printf("%d/n", i);
		
		scanf("%d", &ch);
		a[ch]++;
	}
	
	for (int i = 100;i>=0;i--)
	{
		
		
		for (int j = 1;j <= a[i];j++)
		{
			printf("%d\n", i);
			
		}
	}
	system("pause");
	return 0;
}