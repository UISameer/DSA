// Write a program to reverse an array or string
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end) {
	while (start < end) {
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}
}

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	reverseArray(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}