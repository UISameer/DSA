// Given an array nums, write a function to move all 0's to the
// end of it while maintaining the relative order of the non-zero elements.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void moveZeroes2(vector<int>& nums) {
		int c = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 0)
				c++;
			else
				nums[i - c] = nums[i];
		}
		for (int i = nums.size() - c; i < nums.size(); i++)
			nums[i] = 0;
	}

	void moveZeroes(vector<int>& nums) {

		int n = nums.size();
		int mark = 0;

		for (int i = 0; i < n; i++)
		{
			if (nums[i] != 0)
			{
				nums[mark] = nums[i];
				mark++;
			}
		}

		for (int j = mark; j < n; j++)
			nums[j] = 0;
	}
};

int main() {

	vector<int> v = {0, 1, 0, 3, 12}; //1,3,12,0,0

	Solution().moveZeroes(v);

	for (auto u : v)
	{
		cout << u << endl;
	}

	return 0;
}