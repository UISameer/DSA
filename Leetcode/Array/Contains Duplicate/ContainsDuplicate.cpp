// Given an array of integers, find if the array contains any duplicates.

#include<bits/stdc++.h>
using namespace std;

// >> Set solution
bool containsDuplicate(vector<int>& nums)  {
	set<int> s(nums.begin(), nums.end());
	return s.size() != nums.size();
}

// >> Sort it first and then check if two elements are equal
bool containsDuplicate1(vector<int>& nums) {
	if (nums.size() == 0)
		return false;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < int(nums.size()) - 1; i++) {
		if (nums[i] == nums[i + 1])
			return true;
	}
	return false;
}

int main() {
	vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
	bool isDuplicate = containsDuplicate(nums);
	cout << isDuplicate << endl;
	return 0;
}