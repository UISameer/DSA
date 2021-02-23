#include<iostream>
using namespace std;

int main() {

	int x;
	cin >> x;

	int zero_eve_fibonacci = 0;
	int first_eve_fibonacci = 2;

	int a = 0;
	int b = 2;
	int c = 2;

	while ( c <= x ) {
		c = 4*b + a;
		a = b;
		b = c;
		if (c >x) break;
		cout << c << endl;
	}


	return 0;
}