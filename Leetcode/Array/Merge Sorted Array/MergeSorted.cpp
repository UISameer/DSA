// Merge Sorted Array
// Runtime: 0 ms
// Memory Usage: 9 MB

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		int size = nums1.size();

		for (int j = 0; j < n ; j++) {

			for (int i = 0; i < size ; i++) {

				if (i >= size - n) {
					nums1[i] = nums2[i - m];
				}
			}
		}
		sort(nums1.begin(), nums1.end());
	}
};

int main() {

	vector<int> nums1 = { -1, 0, 0, 3, 3, 3, 0, 0, 0};
	vector<int> nums2 = {1, 2, 2};

	//[-1,0,0,3,3,3,0,0,0]
	//6
	//[1,2,2]
	//3

	int m = 6;
	int n = 3;

	Solution().merge(nums1, m, nums2, n);

	for (auto i : nums1) {
		cout << i << endl;
	}

	return 0;
}