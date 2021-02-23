#include<bits/stdc++.h>
using namespace std;

int main() {

	char str[] = "Python";
	char str2[7];

	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; i >= 0; i--, j++)
		{
			str2[j] = str[i];
		}
		str2[j] = '\0';
	}
	cout << str2 << endl;

	return 0;
}