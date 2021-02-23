
// Given an array of integers numbers that is already sorted in ascending order,
// find two numbers such that they add up to a specific target number.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int>v;

		int i = 0;
		int j = numbers.size() - 1;

		while (i < j) {

			if (numbers[i] + numbers[j] == target) {
				v.push_back(i + 1);
				v.push_back(j + 1);
				return v;
			} else if (numbers[i] + numbers[j] > target) {
				j--;
			} else {
				i++;
			}
		}

		return v;
	}
};

int main() {

	vector<int>v = { 5, 25, 75};
	int target = 100;

	vector<int> result = Solution().twoSum(v, target);

	for (auto u : result)
	{
		cout << u << endl;
	}

	return 0;
}