#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{
	string s1;
	cin >> s1;
	int uppercount = 0, lowercount = 0;
	for (int i = 0; i < s1.size(); i++) 
	{
		if (s1[i] >= 65 && s1[i] <= 90) {

			uppercount++;
		}
		else
			lowercount++;

	}
	if (uppercount > lowercount) 
	{
		for (int i = 0; i < s1.size(); i++) 
		{
			if (s1[i] >= 97 && s1[i] <= 122) 
			{
				s1[i] -= 32;
			}
		
		}
	}
	else
	{
		for (int i = 0; i < s1.size(); i++) 
		{
			if (s1[i] >= 65 && s1[i] <= 90) 
			{
				s1[i] += 32;
			}
		
		}
	}
	cout << s1 << endl;
	return 0;

}

