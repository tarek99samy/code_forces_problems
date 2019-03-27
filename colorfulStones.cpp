#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main() 
{	
	string s, t;
	cin >> s >> t;
	int position = 0;
	for (int i = 0; i < t.size(); i++) 
	{
		if (t[i] == s[position]&&position<s.size())
			position++;
	}
	if (position == s.size())
		cout << position << endl;
	cout << position + 1 << endl;
	return 0;

}

