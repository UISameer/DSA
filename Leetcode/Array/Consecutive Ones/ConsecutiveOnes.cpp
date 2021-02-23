
// > Problem: Given a binary array, find the maximum number of consecutive 1s in this array.
// The input array will only contain 0 and 1.
// The length of input array is a positive integer and will not exceed 10,000

#include <bits/stdc++.h>
using namespace std;

// >> Vector Solution
class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {

		int n = nums.size();
		int maximum = 0;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0)
			{
				count = 0;
			} else {
				count++;
				maximum = max(maximum, count);
			}
		}
		return maximum;
	}
};

// >> Int Array Solution
// Returns count of maximum consecutive 1's
// in binary array arr[0..n-1]
int getMaxLength(long long arr[], int n)
{
	int count = 0; //intitialize count
	int maximum = 0; //initialize max

	for (int i = 0; i < n; i++)
	{
		// Reset count when 0 is found
		if (arr[i] == 0)
			count = 0;

		// If 1 is found, increment count
		// and update result if count becomes
		// more.
		else
		{
			count++; //increase count
			maximum = max(maximum, count);
		}
	}

	return maximum;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Read all elements
	long long arr[6];
	int count = 0;
	int length = 0;

	for (long long i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	length = sizeof(arr) / sizeof(arr[0]);

	count = getMaxLength(arr, length);

	cout << count;

	return 0;
}