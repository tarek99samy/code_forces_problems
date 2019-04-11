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
	string s1,s2;
	cin >> s1;
	for (int i = 0; i < s1.size(); i++) 
	{
		if (s1[i] == 'A' || s1[i] == 'a' || s1[i] == 'I' || s1[i] == 'i' || s1[i] == 'E' || s1[i] == 'e' || s1[i] == 'O' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'U'||s1[i]=='Y'||s1[i]=='y') 
		{
			continue;
		}
		else 
		{
			
			s2 += '.';
			if (s1[i] >= 65 && s1[i] <= 90)
				s2 += (s1[i] + 32);
			else
				s2 += s1[i];
		}
	}
	cout << s2 << endl;
	return 0;
}
