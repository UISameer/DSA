// Remove Duplicates from Sorted Array
// Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		if (nums.size() == 0) {
			return 0;
		}
		// Use the two pointer technique to remove the duplicates in-place.
		// The first element shouldn't be touched; it's already in its correct place.
		int writePointer = 1;
		for (int readPointer = 1; readPointer < nums.size(); ++readPointer)
		{
			// If the current element we're reading is *different* to the previous
			// element...
			if (nums[readPointer] != nums[readPointer - 1]) {
				// Copy it into the next position at the front, tracked by writePointer.
				nums[writePointer] = nums[readPointer];
				// And we need to now increment writePointer, because the next element
				// should be written one space over.
				writePointer++;
			}
		}

		return writePointer;
	}
};

int main() {
	vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	int output = Solution().removeDuplicates(v);
	cout << output;
	return 0;
}