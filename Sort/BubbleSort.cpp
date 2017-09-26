#include <iostream>
using namespace std;
template <typename T>
void _bubblesort(T arr[], int n)
{
	for(int i=0;i<n-1;i++)
		for (int j = 0;j < n - i - 1;j++)
		{
			if (a[j + 1] < a[j])
				swap(a[j + 1],a[j]);
		}
}