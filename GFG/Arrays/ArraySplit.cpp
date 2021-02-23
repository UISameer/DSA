// Split the array and add the first part to the end

#include<bits/stdc++.h>
using namespace std;

void splitAndMove(int arr[], int pos, int n) {
	for (int i = 0; i < pos; i++)
	{
		int x = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = x;
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int pos = 2;
	splitAndMove(arr, pos, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}