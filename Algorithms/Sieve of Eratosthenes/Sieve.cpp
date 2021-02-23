#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<bool> sieveOfEr(int& n) {

		vector<bool> primeNumbers(n + 1, true);

		primeNumbers[0] = false;
		primeNumbers[1] = false;

		for (int i = 2; i * i <= n; ++i)
		{
			for (int j = 2 * i; j <= n; j += i)
			{
				primeNumbers[j] = false;
			}
		}

		return primeNumbers;
	}
};


int main() {

	int n = 12;

	vector<bool> result = Solution().sieveOfEr(n);

	for (auto v : result) {
		cout << " " << v;
	}
	return 0;
}