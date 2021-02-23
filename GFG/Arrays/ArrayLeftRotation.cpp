// Print left rotation of array in O(n) time and O(1) space
#include<bits/stdc++.h>
using namespace std;

// Function to left rotate array multiple times
void leftRotateArray(int arr[], int n, int d) {

	// To get the starting point of rotated array
	int mod = d % n;

	// Prints the rotated array from start position
	for (int i = 0; i < n; i++)
	{
		cout << (arr[(mod + i) % n]) << " ";
	}

	cout <<  "\n";
}

void reverseArray(int arr[], int start, int end) {
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftRoatate2(int arr[], int n, int d) {
	if (d == 0) {
		return;
	}

	d = d % n;

	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	int d = 3;

	// << Method 1
	leftRotateArray(arr, n, d);

	// << Method 2

	return 0;
}