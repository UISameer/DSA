// Time Complexity: O(n2) as there are two nested loops.
// Auxiliary Space: O(1)
// The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.

#include<bits/stdc++.h>
using namespace std;


void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n - 1; ++i)
	{
		// Min element in sorted array
		min_idx = i;

		for (j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[min_idx])  {
				min_idx = j;
			}

			swap(&arr[min_idx], &arr[i]);
		}
	}
}


int main() {

	int arr[] = {12, 43, 11, 45, 64, 54, 32, 47, 98, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, size);

	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}