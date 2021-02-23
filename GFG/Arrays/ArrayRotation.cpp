#include<bits/stdc++.h>
using namespace std;


// << Function to left Rotate arr[] of
// size n by 1
void leftRotateByOne(int arr[], int n) {

	int temp = arr[0], i;

	for ( i = 0; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[i] = temp;
}

// Function to rotate array left by d
void leftRotate(int arr[], int d, int n) {
	for (int i = 0; i < d; i++)
	{
		leftRotateByOne(arr, n);
	}
}

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	// Size of array
	int n = sizeof(arr) / sizeof(arr[0]);
	// Rotate by
	int d = 1;

	leftRotate(arr, d, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}