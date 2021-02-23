//  Program to print half pyramid using alphabets
// A
// B B
// C C C
// D D D D
// E E E E E

#include <bits/stdc++.h>
using namespace std;

int main() {

	char rows = 4;
	char alphabet = 'A';

	for (int i = 1; i <= (rows - 'A' + 1 ); ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << alphabet << " ";
		}
		++alphabet;
		cout << "\n";
	}

	return 0;
}