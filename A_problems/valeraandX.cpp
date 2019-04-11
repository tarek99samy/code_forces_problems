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
	int size;
	cin >> size; 
	char **arr = new char*[size]; 
	for (int i = 0; i < size; i++) 
	{
		arr[i] = new char[size];
	}
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++) 
		{
			cin >> arr[i][j];
		}
	}
	char x = arr[0][0], y = arr[0][1];
	for (int i = 0; i < size; i++) 
	{
		if (i != size/2) 
		{
			int count = 0;
			for (int j = 0; j < size; j++) 
			{
				
				if (arr[i][j] == x)
				{
					count++;
				}
				else if (arr[i][j]!=y )
				{
					cout << "NO\n ";
					return 0;
				}
			}
			if (count != 2)
			{
				cout << "NO\n"; 
				return 0;
			}
		}
		else 
		{
			int count = 0;
			for (int j = 0; j < size; j++)
			{
				if (arr[i][j] == x)
				{
					count++;
				}
				else if (arr[i][j] != y)
				{
					cout << "NO\n ";
					return 0;
				}
			}
			if (count != 1) 
			{
				cout << "NO\n ";
				return 0;
			}
		}
	
	}
	cout << "YES";
	return 0;
}
