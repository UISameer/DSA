// Maximum and minimum of an array using minimum number of comparisons
// Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons.
// Time Complexity: O(n)


#include<bits/stdc++.h>
using namespace std;

struct Pair {
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n) {
	struct Pair minmax;
	int i;

	// If there is only one element then
	// return it as min and max both
	if (n == 1) {
		minmax.min = arr[0];
		minmax.max = arr[0];
	}

	// If there are more than one elements,
	// then initialize min and max
	if (arr[0] > arr[1]) {
		minmax.max = arr[0];
		minmax.min = arr[1];
	} else {
		minmax.max = arr[0];
		minmax.min = arr[1];
	}

	for (int i = 2; i < n; i++)
	{
		if (arr[i] > minmax.max) {
			minmax.max = arr[i];
		} else if (arr[i] < minmax.min) {
			minmax.min = arr[i];
		}
	}

	return minmax;
}

int main() {

	int arr[] = {1000, 11, 445, 1, 330, 3000};
	int n = 6;

	struct Pair minmax = getMinMax(arr, n);

	cout << "Minimum element is "
	     << minmax.min << endl;
	cout << "Maximum element is "
	     << minmax.max;

	return 0;
}