#include <iostream>
using namespace std;
template <typename T>
void _mergesort(T arr[], int l, int, r)
{
	if (l >= r)
		return;
	int mid = (l + r) / 2;
	_mergesort(arr, l, mid);
	_mergesort(arr, mid + 1, r);
	_merge(arr, l, mid, r);
}

template <typename T>
void _merge(T arr[], int l, int mid, int r)
{
	T aux[r - l + 1];
	for (int i = 1;i <= r;i++)
		aux[i - l] = arr[i];
	int i = l, j = mid + 1;
	for (int k = l;k <= r;k++)
	{
		if (i > mid)
		{
			arr[k] = aux[j - l];
			j++;
		}
		else if(j>r)
		{
			arr[k] = aux[i - l];
			i++;
		}
		else if (aux[i - l] < aux[j - l])
		{
			arr[k] = aux[i - l];
			i++;
		}
		else
		{
			arr[k] = aux[j - l];
			j++
		}
	}
}