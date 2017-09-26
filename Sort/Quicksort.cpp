#include <iostream>
using namespace std;

template<typename T>
int _parttion(arr, l, r)
{
	T v = arr[l];
	int j = l;
	for (int i = l + 1;i <= r;i++)
	{
		if (arr[i] < v)
		{
			swap(arr[j + 1], arr[i]);
			j++;
		}
	}
	swap(arr[j], arr[l]);
	return j;
}

template <typename T>
void _quicksort(T arr[], int l, int r)
{
	if (l >= r)
		return;
	int p = _parttion(arr, l, r);
	_quicksort(arr, l, p - 1);
	_quicksort(arr, p + 1, r);
}