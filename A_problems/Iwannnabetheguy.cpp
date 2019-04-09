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
	int n,p1,p2 ;
	cin >> n;
	cin >> p1;
	int *arr = new int[p1];
	for (int i = 0; i < p1; i++) 
	{
		cin >> arr[i];
	}
	cin >> p2;
	int *arr2 = new int[p2];

	for (int i = 0; i < p2; i++) {
	
		cin >> arr2[i];
	}
	int expected = 1;
	bool exit = true;
	for (int i = 0; i < n; i++) 
	{
		exit = true;
		for (int j = 0; j < p1; j++) 
		{
			if (arr[j] == expected)
			{
				exit = false;
				break;
			}
		}
		for (int j = 0; j < p2; j++) 
		{
			if (arr2[j] == expected)
			{
				exit = false;
				break;
			}
		}
		if (exit)
		{
			cout << "Oh, my keyboard!\n ";
			return 0;
		}
		expected++;
	}
	cout << "I become the guy.\n ";

	return 0;
		
	
}