// Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void duplicateZeros(vector<int>& arr)
	{
		int n = arr.size();
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] == 0)
			{
				arr.insert(arr.begin() + i, 0);
				++i;
			}
		}
		arr.erase(arr.begin() + n, arr.end());
	}
};

int main() {

	vector<int>v = {1, 0, 2, 3, 0, 4, 5, 0}; // [1,0,0,2,3,0,0,4]

	Solution().duplicateZeros(v);

	for (auto i : v) {
		cout << i << endl;
	}

	return 0;
}