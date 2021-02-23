#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Auxiliary Space: O(1)
class Solution {
public:

	int findCandidate(vector<int>& a, int size)
	{
		int maj_index = 0, count = 1;
		for (int i = 1; i < size; i++) {
			if (a[maj_index] == a[i])
				count++;
			else
				count--;
			if (count == 0) {
				maj_index = i;
				count = 1;
			}
		}
		return a[maj_index];
	}

	/* Function to check if the candidate
	occurs more than n/2 times */
	bool isMajority(vector<int>& a, int size, int cand)
	{
		int count = 0;
		for (int i = 0; i < size; i++)

			if (a[i] == cand)
				count++;

		if (count > size / 2)
			return 1;

		else
			return 0;
	}

	int majorityElement(vector<int>& nums) {
		/* Find the candidate for Majority*/
		int cand = findCandidate(nums, nums.size());

		/* Print the candidate if it is Majority*/
		if (isMajority(nums, nums.size(), cand))
			cout << " " << cand << " ";

		else
			cout << "No Majority Element";

		return cand;
	}
};

/* Driver code */
int main()
{
	vector<int>v = { 3, 2, 3 };

	// Function calling
	Solution().majorityElement(v);

	return 0;
}

