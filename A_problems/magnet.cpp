#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{
	int size;
	cin >> size;
	int x,y,count=1 ; 
	cin >> x;
	for (int i = 1; i < size; i++) 
	{
		cin >> y;
		if (y != x) 
		{
			count++;
		}
		x = y; 
	}
	cout << count << endl; 
}

