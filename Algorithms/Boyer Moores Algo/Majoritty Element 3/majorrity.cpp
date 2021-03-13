// https://leetcode.com/problems/majority-element-ii/

#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
// Auxiliary Space: O(1)
class Solution {
public:
	vector<int> majorityElement(vector<int>& nums)
	{
		int sz = nums.size();
		int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
		for (i = 0; i < sz; i++)
		{
			if (nums[i] == num1)
				count1++;
			else if (nums[i] == num2)
				count2++;
			else if (count1 == 0)
			{
				num1 = nums[i];
				count1 = 1;
			}
			else if (count2 == 0)
			{
				num2 = nums[i];
				count2 = 1;
			}
			else
			{
				count1--;
				count2--;
			}
		}
		vector<int> ans;
		count1 = count2 = 0;
		for (i = 0; i < sz; i++)
		{
			if (nums[i] == num1)
				count1++;
			else if (nums[i] == num2)
				count2++;
		}
		if (count1 > sz / 3)
			ans.push_back(num1);
		if (count2 > sz / 3)
			ans.push_back(num2);
		return ans;
	}
};

// class GenneralizedSolution:
//   	def majorityElement(self, nums: List[int]) -> List[int]:
//   		candidates = {}
//   		k = 3
//   		for num in nums:
//   			if num in candidates:
//   				candidates[num] += 1
//   			elif len(candidates) < k:
//   				candidates[num] = 1
//   			else:
//   				temp={}
//   				for c in candidates:
//   					candidates[c]-=1
//   					if candidates[c] >= 1:
//   						temp[c] = candidates[c]
//   				candidates = temp
//   		out = [k for k in candidates if nums.count(k) > len(nums) // 3]
//   		return out


class SolutionEasy {
public:
	vector<int> majorityElement(vector<int> &a)
	{
		int y(-1), z(-1), cy(0), cz(0);

		for (const auto & x : a)
		{
			if (x == y) cy++;
			else if (x == z) cz++;
			else if (! cy) y = x, cy = 1;
			else if (! cz) z = x, cz = 1;
			else cy--, cz--;
		}

		cy = cz = 0;
		for (const auto & x : a)
			if (x == y) cy++;
			else if (x == z) cz++;

		vector<int> r;
		if (cy > size(a) / 3) r.push_back(y);
		if (cz > size(a) / 3) r.push_back(z);
		return r;
	}
};

int main()
{
	vector<int>v = { 1, 2 };

	// Function calling
	vector<int> res = Solution().majorityElement(v);

	for (auto d : res) {
		cout << " " << d;
	}

	return 0;
}

