#include <bits/stdc++.h>
using namespace std;

int main() {

	int rows = 4;

	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 0; j <= rows - i; ++j)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	return 0;
}


/* Another logic */

// for(int i = rows; i >= 1; --i)
// {
//     for(int j = 1; j <= i; ++j)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }
//