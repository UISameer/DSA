#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {

		vector<int>result;

		for (int i = 0; i < nums.size() / 2; ++i)
		{
			result.push_back(nums[i]);
			result.push_back(nums[i + n]);
		}

		return result;
	}
};

int main() {

	vector<int>v = {1, 1, 2, 2};
	int n = 2;

	vector<int> result = Solution().shuffle(v, n);

	for (auto d : result) {
		cout << " " << d;
	}
	return 0;
}