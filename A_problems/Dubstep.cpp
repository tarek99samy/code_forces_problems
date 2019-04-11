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
	bool exit = false; 
	while (s1.size()!=0&&s2.size()==0 ) 
	{
		for (int i = 0; i < 3; i++)
			s2 += s1[i];
		if (s2 == "WUB")
		{
			s1.erase(0, 3);
			s2.clear();
		}
		for (int i = s1.size() - 3; i < s1.size(); i++)
			s2 += s1[i];
		if (s2 == "WUB") 
		{
			s1.erase(s1.size() - 3, 3);
			s2.clear();
		}
	}
	int found = s1.find("WUB");
	while (found != string::npos) 
	{
		s1.erase(found, 3); 
		int second =s1.find("WUB");
		while (second == found&&second!=string::npos)
		{
			s1.erase(found, 3);
			second = s1.find("WUB");
		} 
		s1.insert(found, 1,' ');
		found = s1.find("WUB");
	}
	cout << s1 << endl;
	return 0;
}
