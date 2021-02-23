#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("bsinput.txt", "r", stdin);
	freopen("bsoutput.txt", "w", stdout);
#endif

	int i, j, l = 0, r = 0, z = 0, y = 0, x = 0;
	string s;
	cin >> s;
	int len = s.length();
	//first count the number of left and right parenthesis
	for (i = 0; i < len; i++)
	{
		if (s[i] == '(')
			l++;
		else
			r++;
	}
	if (l != r)
		cout << "0";
	else
	{
		l = 0;
		for (i = 0; i < len; i++)
		{
			if (s[i] == '(')
				l++;
			else
				l--;
			if (l < y)
			{
				y = l;
				x = i + 1;
			}
		}

		// left shift the string by x
		reverse(s.begin(), s.begin() + x);

		reverse(s.begin() + x, s.end());

		reverse(s.begin(), s.end());

		l = 0;
		for (i = 0; i < len; i++)
		{
			if (s[i] == '(')
				l++;
			else
				l--;
			if (l == 0)
				z++;
		}
		cout << z;
	}
}