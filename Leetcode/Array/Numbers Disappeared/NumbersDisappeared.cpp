#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {

		vector<int> res;

		for (int i = 1; i < nums.size() + 1; ++i)
		{
			vector<int>::iterator it;
			it = std::find (nums.begin(), nums.end(), i);
			if (it == nums.end()) {
				res.push_back(i);
			}
		}

		return res;
	}

	vector<int> findDisappearedNumbers3(vector<int>& nums) {
		vector<bool> arr(nums.size(), true);
		for (int i = 0; i < nums.size(); i++)
			arr[nums[i] - 1] = false;

		vector<int> result;
		for (int i = 0; i < nums.size(); i++)
			if (arr[i])
				result.push_back(i + 1);

		return result;
	}

	vector<int> findDisappearedNumbers2(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++) {
			nums[abs(nums[i]) - 1] = -1 * abs(nums[abs(nums[i]) - 1]); // Negate all indices whose values exist in nums
		}

		vector<int> temp;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] > 0) {temp.push_back(i + 1);} // Check which indices are not negated
		}
		return temp;
	}

};

int main() {

	vector<int>v = {4, 3, 2, 7, 8, 2, 3, 1};
	vector<int>result = Solution().findDisappearedNumbers3(v);

	for (auto d : result) {
		cout << " " << d;
	}

	return 0;
}
