#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
int main()
{
	string s1;
	getline(cin, s1);
	sort(s1.begin(), s1.end());// how to sort string  ;
	int count = 0;
	int i = 0;
	// here the string will be like spaces comes letters brackets 
	while (s1[i] != ','&&i < s1.size())
	{
		i++;

	}
	if (i >= s1.size()) // if the string doesn't have , so it will be one of two things the fisrt is the set is empty or consits of only one element 
	{
		if (s1.size() == 2) {
		
			cout << 0; 

			return 0;
		}
		else
		{
			cout << 1 << endl;

			return 0;
		}
	}
	i++;
	while (i < s1.size() && s1[i] != '{'&&s1[i] != '}')
	{
		if (s1[i] != s1[i - 1] && s1[i] != ' ')
		{
			count++;
		}
		i++;
	}
	cout << count << endl;
	return 0;
}