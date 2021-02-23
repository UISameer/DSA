// https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity: O(N * K)
	// Space Complexity: O(1)
	vector<int> slidingWindow(vector<int>& arr, int k) {

		vector<int> result;

		for (int i = 0; i <= arr.size() - k; ++i)
		{
			int max = arr[i];

			for (int j = 1; j <  k; ++j)
			{
				if (arr[i + j] > max) {
					max = arr[i + j];
				}
			}

			result.push_back(max);
		}

		return result;
	}
};

int main() {

	vector<int>v = {1, 2, 3, 1, 4, 5, 2, 3, 6};
	int k = 3;
	vector<int>res = Solution().slidingWindow(v, k); // 3 3 4 5 5 5 6

	for (auto d : res) {
		cout << " " << d;
	}
	return 0;
}
