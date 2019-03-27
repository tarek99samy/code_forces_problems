#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{
	string s1;
	cin >> s1;
	for (int i = 0; i < s1.size(); i++) {
		int index = i;
		for (int j = i + 1; j < s1.size(); j++) 
		{
			if (s1[j] < s1[index])
				index = j;
		
		}
		swap(s1[i], s1[index]);
	}
	int count = 1;
	for (int i = 0; i < s1.size()-1; i++) 
	{
		if (s1[i] != s1[i + 1])
			count++;
		
	}
	if (count % 2 == 0)
	{
		cout << "CHAT WITH HER!\n ";

	}
	else
		cout << "IGNORE HIM!\n ";
	return 0;

}

