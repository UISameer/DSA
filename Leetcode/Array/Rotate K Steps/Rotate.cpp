// Rotate Array
// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		while (k--) {
			int val = nums.back();
			nums.insert(nums.begin(), val);
			nums.pop_back();
		}
	}

	void rotateA(int arr[], int n, int d)
	{
		while (d--) {
			int x = arr[n - 1], i;
			for (i = n - 1; i > 0; i--)
				arr[i] = arr[i - 1];
			arr[0] = x;
		}
	}

};

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

	// int array[] = {1, 2, 3, 4, 5, 6, 7};
	// int n = sizeof(arr) /
	//         sizeof(arr[0]);

	// Rotate by
	int d = 3;

	// Solution().rotateA(array, n, d);

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << array[i] << " ";
	// }

	Solution().rotate(arr, d);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}