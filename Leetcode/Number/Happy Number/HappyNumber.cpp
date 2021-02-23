// https://leetcode.com/problems/happy-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		while (true) {
			if (n == 1) { return true; }
			if (n == 4) { return false; }
			int next = 0;
			while (n) {
				next += (n % 10) * (n % 10);
				n /= 10;
			}
			n = next;
		}
	}
};


int main() {

	int n = 100;
	bool happy = Solution().isHappy(n);
	cout << happy;
	return 0;
}
