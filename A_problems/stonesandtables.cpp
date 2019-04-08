#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{	
	int count ,i=1;
	cin >> count;
	count = 0;
	string s1;
	cin >> s1;
	while (s1.size() != 1 && i < s1.size()) 
	{
		if (s1[i] == s1[i - 1])
		{
			s1.erase(s1.begin()+i);
			i--;
			count++; 
		}
		i++; 
	
	}
	cout << count << endl;
	return 0;
}

