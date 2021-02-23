// Program to print half pyramid a using numbers
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

int main() {

	int rows = 4;
	// cout << "Enter no of rows: " << endl;
	// cin >> rows;

	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << j << " ";
		}
		cout << "\n";
	}

	return 0;
}
