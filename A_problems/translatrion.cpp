#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
#include<cmath>
#include<list>
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() != s2.size())
	{
		cout << "NO\n ";
		return 0;

	}
	int size = s1.size();
	for (int i = 0; i < size; i++) 
	{
		if (s1[i] != s2[size  - 1 - i]) 
		{
			cout << "NO\n ";
			return 0;
		}
	
	}
	cout << "YES\n ";
	return 0;
}
