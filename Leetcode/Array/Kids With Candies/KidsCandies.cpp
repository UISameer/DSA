// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

		vector<bool> result;

		// Gett max from the array
		int max = *max_element(candies.begin(), candies.end());

		cout << max;

		for (int i = 0; i < candies.size(); ++i)
		{
			if (candies[i] + extraCandies >= max) {
				result.push_back(true);
			} else {
				result.push_back(false);
			}
		}

		return result;
	}
};

int main() {

	vector<int> v = {12, 1, 12};
	int extraCandies = 10;
	vector<bool> result = Solution().kidsWithCandies(v, extraCandies);
	for (auto i : result) {
		cout << " " << i ;
	}
	return 0;
}