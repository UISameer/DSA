#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int heightChecker(vector<int>& heights) {

		int count = 0;

		vector<int> record = heights;

		sort(record.begin(), record.end());

		for (int i = 0; i < record.size(); i++)
		{
			if (heights[i] != record[i])
				count++;
		}

		return count;

	}
};

int main() {

	vector<int>v = {5, 1, 2, 3, 4};
	int result = Solution().heightChecker(v);
	cout << result;
	return 0;
}