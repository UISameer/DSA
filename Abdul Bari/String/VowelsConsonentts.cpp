#include<bits/stdc++.h>
using namespace std;

int main() {
	char A[] = "How are you";

	int i, vCount  = 0, cCount = 0, word = 1;

	for (int i = 0; A[i] != '\0'; ++i)
	{
		if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U') {
			vCount ++;
		} else if ((A[i] >= 65 && A[i] <= 97) || (A[i] >= 97 && A[i] <= 122)) {
			cCount ++;
		}

		if (A[i] == ' ' && A[i - 1] != ' ') {
			word++;
		}
	}

	cout << "Vowels - " << vCount << endl;
	cout << "Consonents - " << cCount << endl;
	cout << "Words - " << word << endl;
	return 0;
}