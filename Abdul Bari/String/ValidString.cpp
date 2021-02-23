#include<bits/stdc++.h>
using namespace std;

int isValid(char *s) {
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ( !(s[i] >= 65 && s[i] <= 90) && (!(s[i] >= 97 && s[i] <= 126)) && (!(s[i] >= 48 && s[i] <= 57)) ) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char name[] = "Sameer?123";

	if (isValid(name)) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}