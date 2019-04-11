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
	int col, row;
	cin >> col >> row; 
	int size = row * col;
	for (int i = 0; i < size; i++) 
	{
		char x;
		cin >> x;
		if (x == 'W' || x == 'B' || x == 'G')
			continue;
		else 
		{
			cout << "#Color\n ";
			return 0;
		}
	
	}
	cout << "#Black&White\n ";
	return 0;
}
