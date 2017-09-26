#include <iostream>
using namespace std;
template <typename T>
void _selectsort(T arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		min = i;
		for (j = i + 1;j < n;j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		if (min != i)
			swap(a[min], a[i]);
	}
}