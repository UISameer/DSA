// Remove Duplicates from Sorted Array
// Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		// when the number of duplicates is large enough,
		// it's actually faster to convert to a set and then dump the data back into a vector.
		set<int> s;
		unsigned size = nums.size();
		for ( unsigned i = 0; i < size; ++i )
			s.insert( nums[i] );
		// Assign back to vector
		nums.assign( s.begin(), s.end() );
		return nums.size();
	}
};

int main() {
	vector<int> v = {1, 1, 2};
	int output = Solution().removeDuplicates(v);
	cout << output;
	return 0;
}