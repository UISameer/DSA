#include<bits/stdc++.h>
using namespace std;

void ChangeCase(char s[]) {
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] += 32;
	}
}

void ShuffleCase(char s[]) {
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ( s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		else
			s[i] -= 32;
	}
}

int main() {
	char s[] = "WELCOME";
	ChangeCase(s);
	char c[] = "wELcome";
	ShuffleCase(c);
	cout << s << endl;
	cout << c << endl;
	return 0;
}