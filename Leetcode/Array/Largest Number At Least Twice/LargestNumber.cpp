// https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1147/
// In a given integer array nums, there is always exactly one largest element.

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	int dominantIndex(vector<int>& nums) {

		int largest = INT_MIN;
		int maxIndex = 0;

		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] > largest) {
				largest = nums[i];
				maxIndex = i;
			}
		}

		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] != largest && 2 * nums[i] > largest)
				return -1;
		}

		return maxIndex;
	}
};


int main() {

	vector<int> v = {1, 2, 3, 4};

	int largest = Solution().dominantIndex(v);

	cout << largest << endl;

	return 0;
}