
#include <bits/stdc++.h>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T, N, D;
	vector<int>v;

	// No of elements
	cin >> T;

	// Read elemen
	while (T--) {
		cin >> N;
		v.push_back(N);
	}

	// Idex to be deleted
	cin >> D;
	// Delete elelment at index
	v.erase(v.begin() + D );

	// Sort array in ascending order
	sort(v.begin(), v.end());

	for (auto x : v)
		cout << x << " " << endl;

	return 0;
}