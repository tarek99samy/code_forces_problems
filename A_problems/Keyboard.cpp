#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
int main()
{
	string s1("qwertyuiopasdfghjkl;zxcvbnm,./");
	char dir; 
	cin >> dir;
	string s2;
	cin >> s2;
	for (int i = 0; i < s2.size(); i++) 
	{
		for (int j = 0; j < 30; j++) 
		{
			if (s2[i] == s1[j]) 
			{
				if (dir == 'R') 
				{
				
					s2[i] = s1[j - 1];
					break;
				}
				else 
				{
					s2[i] = s1[j + 1];
					break;
				}
			
			}
		}
	}
	cout << s2 << endl;
	return 0;
}