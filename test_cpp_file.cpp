#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string s)
{
	string p = s;
	reverse(p.begin(), p.end());
	if (s == p) {
		return "Yes";
	}
	else {
		return "No";
	}
}

int main()
{
	string s;
	getline(cin,s);
	cout << isPalindrome(s);

	return 0;
}
