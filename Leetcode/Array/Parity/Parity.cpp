#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {

		int n = A.size();
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] % 2 == 0)
			{
				swap(A[i], A[c]);
				c++;
			}
		}
		return A;

	}

	vector<int> sortArrayByParityInPlace2(vector<int>& A) {
		int i = 0, j = A.size() - 1;
		while (i < j) {
			if (A[i] % 2 > A[j] % 2) {
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}

			if (A[i] % 2 == 0) i++;
			if (A[j] % 2 == 1) j--;
		}

		return A;
	}
};

int main() {

	vector<int>v = {3, 1, 2, 4};

	vector<int>result = Solution().sortArrayByParity(v);

	for (auto d : result) {
		cout << " " << d;
	}

	return 0;
}