#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool checkIfExist(vector<int>& arr) {

		bool isExist = false;

		for (int i = 0; i < arr.size() ; i++) {

			for (int j = 0; j < arr.size() ; j++) {

				if (i != j && arr[i] == 2 * arr[j]) {

					isExist = true;
				}
			}
		}

		return isExist;
	}

	// << HashSet Approach
	bool checkIfExist2(vector<int>& arr) {

		unordered_set<int> uset;

		for (int& i : arr) {

			if (uset.count(2 * i) || (!(i & 1) && (uset.count(i / 2)))) {
				return true;
			}
			uset.insert(i);
		}
		return false;
	}
};

int main() {

	vector<int> v = { 0, 0 };

	bool isExist = Solution().checkIfExist(v);

	cout << isExist << endl;

	return 0;
}