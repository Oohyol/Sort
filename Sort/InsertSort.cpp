#include<iostream>
using namespace std;
template <typename T>
void _insertsort(T arr[], int n)
{
	for (int i = 1;i < n ;i++)
	{
		T v = arr[i];
		int j = i;
		while (j > 0 && arr[j-1] > v)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = v;
	}
}