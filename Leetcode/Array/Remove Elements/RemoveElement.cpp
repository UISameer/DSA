#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {

		int count = 0;
		for (auto i = nums.begin(); i != nums.end(); i++) {
			if (*i == val) {
				nums.erase(i);
				i--;
			} else {
				count++;
			}
		}
		return count;
	}
};

int main() {

	vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2}; // [0,1,4,0,3]
	int val = 2;

	Solution().removeElement(v, val);

	for (auto i : v) {
		cout << i;
	}

	cout << "\nSize is:- " << v.size();

	return 0;
}