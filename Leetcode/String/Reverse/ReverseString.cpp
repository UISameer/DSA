// Write a function that reverses a string.
// The input string is given as an array of characters char[].


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {

		int i = 0;
		int j = s.size() - 1;

		while (i < j) {
			swap(s[i], s[j]);
			i++;
			j--;
		}
	}
};

int main() {

	vector<char>s = {'h', 'e', 'l', 'l', 'o'};

	Solution().reverseString(s);

	for (auto u : s)
	{
		cout << u << endl;
	}

	return 0;
}