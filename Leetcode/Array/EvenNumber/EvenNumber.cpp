// Find Numbers with Even Number of Digits

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

	int countDigit(int n)
	{
		if (n == 0)
			return 0;
		return 1 + countDigit(n / 10);
	}

	int findNumbers(vector<int>& nums) {

		int count = 0;

		for (auto i : nums) {

			if ( countDigit(i) % 2 == 0) {
				count ++;
			}
		}
		return count;
	}
};

int main() {

	vector<int> v = {12, 345, 2, 6, 7896, 3456, 3457, 4321};

	int count = Solution().findNumbers(v);

	cout << "Count is:- " << count << endl;

	return 0;
}
