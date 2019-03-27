#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{	
	int arr[4];
	for (int i = 0; i < 4; i++) 
	{
		cin >> arr[i];
	
	}
	string s; 
	cin >> s;
	long long calories = 0;
	for (int i = 0; i < s.size(); i++) 
	{
		int x = s[i]-48;// the digit (1 )is stored in string as 49 so I should substract 48 from it ;
		calories += arr[x - 1];
	}
	cout << calories << endl;
	return 0;
}

