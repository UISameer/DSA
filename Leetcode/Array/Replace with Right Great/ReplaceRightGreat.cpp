#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		int maxNo = -1;
		for (int i = arr.size() - 1; i >= 0; i--) {
			int cur = arr[i];
			arr[i] = maxNo;
			maxNo = max(maxNo, cur);
		}
		return arr;
	}

	vector<int> replaceElements2(vector<int>& A, int mx = -1) {
		for (int i = A.size() - 1; i >= 0; --i)
			mx = max(mx, exchange(A[i], mx));
		return A;
	}
};

int main() {

	vector<int> v = {17, 18, 5, 4, 6, 1};

	vector<int> result = Solution().replaceElements(v);

	for (auto u : result)
	{
		cout << u << endl;
	}
	return 0;
}