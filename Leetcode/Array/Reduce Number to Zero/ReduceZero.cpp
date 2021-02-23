// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int numberOfSteps (int num) {

		int steps = 0;

		if (num == 0) {
			return steps;
		}

		if (num % 2 == 0) {
			num = num / 2;
			steps++;
			numberOfSteps(num);
		} else {
			num = num - 1;
			steps++;
			numberOfSteps(num);
		}

		return steps;
	}
};

int main() {

	int num = 14;
	int steps = Solution().numberOfSteps(num);
	cout << steps;
	return 0;
}