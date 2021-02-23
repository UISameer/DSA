// https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1144/
// Given an array of integers nums, calculate the pivot index of this array.


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int pivotIndex(vector<int>& nums) {

		int n = nums.size();
		int leftSum = 0;
		int rightSum = 0;

		for (int x : nums) {
			rightSum += x;
		}

		for (int i = 0; i < n; leftSum += nums[i], rightSum -= nums[i], i++) {
			if (leftSum == rightSum - nums[i]) {
				return i;
			}
		}
		return -1;
	}
};

int main() {

	vector<int> v = { -1, -1, -1, -1, -1, -1};
	int pivot = Solution().pivotIndex(v);
	cout << pivot << endl;
	return 0;
}