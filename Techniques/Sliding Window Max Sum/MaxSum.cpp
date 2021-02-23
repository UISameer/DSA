// https://www.geeksforgeeks.org/window-sliding-technique/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

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

	vector<int>v = {100, 200, 300, 400};
	int k = 2;
	vector<int>res = Solution().slidingWindow(v, k); // 3 3 4 5 5 5 6

	for (auto d : res) {
		cout << " " << d;
	}
	return 0;
}
