#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
int main()
{
	string s1;
	cin >> s1;
	if (s1.size() == 1) 
	{
		cout << s1 << endl;
		return 0;
	}
	sort(s1.begin(), s1.end());
	int i = 0;
	while (s1[i] == '+') 
	{
		i++;
	}
	while (i<s1.size()-1)
	{
		s1.erase(s1.begin()); 
		s1.insert(s1.begin()+i, '+');
		i++;
	}
	cout << s1 << endl;
	
	return 0;
}