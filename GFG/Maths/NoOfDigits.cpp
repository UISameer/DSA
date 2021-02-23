#include<bits/stdc++.h>
using namespace std;

int main() {

	int num = 58964;
	int count = 0;

	while (num != 0) {
		count += 1;
		num = num / 10;
	}

	cout << "Count is:- " << count << endl;

	return 0;
}