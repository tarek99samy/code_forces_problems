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
	string s1;
	cin >> s1;
	int count = 0;
	int size = s1.size();
	for (int i = 0; i < size; i++) 
	{
		if (count >=6) 
		{
			cout << "YES\n";
			return 0;
		}
		if (i < size - 1) // if the  7  count get in the last position 
		{
			if (s1[i] == s1[i + 1])
				count++;
			else
				count = 0;
		}
	}
	cout << "NO\n ";
	
	return 0;
	

	
}
