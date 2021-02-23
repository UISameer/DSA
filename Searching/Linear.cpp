// The time complexity of the above algorithm is O(n).

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int k) {
	int i;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == k) {
			return i;
		}
	}
	return -1;
}

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int k = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << search(arr, n, k) << endl;
	return 0;
}