#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
int main()
{
	int size; 
	cin >> size;
	string *arr = new string[size];
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) 
	{
	
		if (arr[i].size() <= 10)
			continue;
		string s1;
		s1 += arr[i][0];
		int j = (arr[i].size() - 2);
		s1 += to_string(j);
		s1 += arr[i][arr[i].size() - 1];
		arr[i] = s1;
	
	}
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i]<<endl;
	}
	return 0;
}