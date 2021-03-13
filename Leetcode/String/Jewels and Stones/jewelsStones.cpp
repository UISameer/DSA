// https://leetcode.com/problems/jewels-and-stones/

#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(J+S)
class Solution {
public:

	// ascii from A to z
	bool list[58];

	int numJewelsInStones(string J, string S) {
		int cnt = 0;

		for (int i = 0; i < J.size(); i++)
			list[J[i] - 65] = true;

		for (int i = 0; i < S.size(); i++)
			if (list[S[i] - 65])
				cnt++;

		return cnt;
	}

	// Set Solution
	int numJewelsInStonesSet(string J, string S) {
		unordered_set<char> st(J.begin(), J.end());
		int c = 0;
		for (char i : S)
			c += st.count(i);
		return c;
	}
};

int main() {

}