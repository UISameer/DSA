// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {

		int profit = 0;

		if (prices.size() == 0) return 0;

		for (int i = 0; i < prices.size() - 1; i++) {

			if (prices[i] < prices[i + 1]) {
				profit += prices[i + 1] - prices[i];
			}
		}

		return profit;
	}
};

int main() {

	vector<int> v = {1, 2, 3, 4, 5};

	int profit = Solution().maxProfit(v);

	cout << profit << endl;

	return 0;
}