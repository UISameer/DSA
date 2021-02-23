#include <bits/stdc++.h>
using namespace std;

// >> Recursive
int binarySearch(int arr[], int l, int r, int k) {

	if (r >= l) {

		int mid = l + (r - l) / 2;

		if (arr[mid] == k) {
			return mid;
		}

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > k) {
			return binarySearch(arr, l, mid - 1, k);
		}

		return binarySearch(arr, mid + 1, r, k);
	}

	return -1;
}

// >> Iterative
int binarySearchIterative(int arr[], int l, int r, int x)
{
	while (r >= l) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 4;

	// int result = binarySearch(arr, 0, n - 1, k);
	int result = binarySearchIterative(arr, 0, n - 1, k);
	cout << result << endl;
	return 0;
}