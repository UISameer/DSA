#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void reverseArray(vector<int>& arr, int start,
	                  int end)
	{
		while (start < end)
		{
			std::swap(arr[start], arr[end]);
			start++;
			end--;
		}
	}

	/* Function to right rotate arr[]
	of size n by d */
	void rotate(vector<int>& arr, int k)
	{
		reverseArray(arr, 0, k - 1);
		reverseArray(arr, 0, arr.size() - 1);
		reverseArray(arr, arr.size(), k - 1);
	}
};

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

	// Rotate by
	int d = 3;

	Solution().rotate(arr, d);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}