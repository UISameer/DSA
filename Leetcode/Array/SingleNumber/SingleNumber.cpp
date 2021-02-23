// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		for (auto i : nums) {

			int count = 0;

			for (auto j : nums) {

				if (i == j) {

					count += 1;
				}
			}

			if (count == 1) {
				return i;
			}
		}
		return 999;
	}


	int singleNumber2(vector<int>& nums) {
		return std::accumulate(begin(nums), end(nums), 0, std::bit_xor<int>());
	}

	int singleNumber3(vector<int>& nums) {
		int res = 0;
		for (int i = 0; i < nums.size(); i++)
			res = res ^ nums[i];
		return res;
	}
};

int main() {

	vector<int> nums = {4, 1, 2, 1, 2};
	int number = Solution().singleNumber(nums);
	cout << "Num is:- " << number << endl;

	return 0;
}