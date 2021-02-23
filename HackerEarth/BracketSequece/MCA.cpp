#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long T, N, K;

	cin >> T;

	while (T--) {

		cin >> N >> K;

		long long v[N];

		for (long long i = 0; i < N; i++)
		{
			cin >> v[i];
		}

		sort(v, v + N);

		if (v[0] < K) {
			cout << K - v[0] << endl;
		} else {
			cout << 0 << endl;
		}
	}


	return 0;
}