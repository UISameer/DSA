#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int array[6];

 for (int i = 0; i < 6; i++)
{
	cin >> array[i];
}

	for (int i = 5; i >= 1; --i)
	{
		cout << array[i] << endl;
	}

	return 0;
}