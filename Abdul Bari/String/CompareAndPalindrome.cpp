#include<bits/stdc++.h>
using namespace std;

int main() {

	char A[] = "Python";
	char B[] = "Pyhton";
	int i, j;

	for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
	{
		if (A[i] != B[j]) {
			break;
		}
		if (A[i] == B[j]) {
			cout << "Equal" << endl;
		} else if (A[i] > B[j]) {
			cout << "First is greater" << endl;
		} else {
			cout << "Second is greater" << endl;
		}
	}
	return 0;
}