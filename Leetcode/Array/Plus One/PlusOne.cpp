#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		for (int i = digits.size(); i--; digits[i] = 0)
			if (digits[i]++ < 9)
				return digits;
		digits[0]++;
		digits.push_back(0);
		return digits;
	}
};

int main() {

	vector<int> v = {1, 2, 3};

	vector<int> result = Solution().plusOne(v);

	for (auto i : result) {
		cout << " " << i ;
	}
	return 0;
}

