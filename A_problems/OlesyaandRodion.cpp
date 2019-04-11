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
	int  n, t;
	cin >> n >> t;
	string s1;
	if (t == 10)
	{
		if (n < 2)
		{
			cout << -1 << endl;
			return 0;

		}
		else
		{
			for (int i = 0; i < n - 1; i++)
			{

				s1 += (1 + '0');
			}
			s1 += (0 + '0');
		}
		cout << s1 << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		char x;
		s1 += (t + '0');

	}
	cout << s1 << endl;
	return 0;
}
