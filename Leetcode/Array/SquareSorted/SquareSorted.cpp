// Squares of a Sorted Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {

		vector<int> sorted;

		for (auto i : nums) {
			sorted.push_back(i * i);
		}

		sort(sorted.begin(), sorted.end());

		return sorted;
	}
};

int main() {

	vector<int> v = { -7, -3, 2, 3, 11};

	vector<int> result = Solution().sortedSquares(v);

	for (auto i : result) {
		cout << i << endl;
	}

	return 0;
}