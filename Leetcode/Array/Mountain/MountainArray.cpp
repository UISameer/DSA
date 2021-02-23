#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// We are ascending until we find the peak, then descending.
// If we start ascending again after we found the peak, the mountain array is invalid.
	bool validMountainArray(vector<int>& A) {

		if (A.size() == 0)
			return false;

		if (A.size() < 3 || A[0] > A[1])
			return false;

		auto peak = false;

		for (auto i = 1; i < A.size(); ++i) {

			if (peak && A[i - 1] < A[i] || A[i - 1] == A[i])
				return false;
			peak = A[i - 1] > A[i];
		}
		return peak;
	}

	bool validMountainArray2(vector<int>& A) {

		if (A.size() == 0)
			return false;
		int i = 0;
		while (i < A.size() - 1 && A[i] < A[i + 1])
			i++;
		if (i == 0 || i == A.size() - 1)
			return false;
		while (i < A.size() - 1 && A[i] > A[i + 1])
			i++;
		return i == A.size() - 1 ? true : false;

	}
};

int main() {

	vector<int> v = {1, 3, 2};

	bool isMountainArr = Solution().validMountainArray(v);

	cout << isMountainArr << endl;

	return 0;
}