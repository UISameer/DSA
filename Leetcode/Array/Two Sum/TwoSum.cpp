#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		vector<int>v;

		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[j] == target - nums[i]) {
					v.push_back(i);
					v.push_back(j);
				}
			}
		}

		return v;
	}


	vector<int> twoSumHash(vector<int>& nums, int target) {
		unordered_map<int, int> cache;
		vector<int> answer;

		for (size_t i = 0; i < nums.size(); ++i)
		{
			int needed_num = target - nums[i];

			if (cache.find(needed_num) != cache.end())
			{
				// We found it
				answer.push_back(cache[needed_num]);
				answer.push_back(i);
				return answer;
			}
			else
			{
				// Didn't find it
				cache.insert(make_pair(nums[i], i));
			}
		}
		return answer;
	}

	vector<int> twoSum2(vector<int>& nums, int target) {

		map<int, int> m;
		for (int i = 0; i < nums.size(); ++i) {
			const int comp = target - nums[i];
			if (m.count(comp) > 0) {
				return vector<int> {i, m[comp]};
			}
			m[nums[i]] = i;
		}
		assert(false);
	}
};


int main() {

	vector<int>v = { 3, 3};
	int target = 6;

	vector<int> result = Solution().twoSum(v, target);


	for (auto d : result) {
		cout << " " << d;
	}
	return 0;
}