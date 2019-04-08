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
	int *p= new int[size];
	for (int i = 0; i < size; i++) 
	{
		int x;
		cin >> x;
		p[x - 1] = i+1;
		
	}
	for (int i = 0; i < size; i++) 
	{
		cout << p[i] << " ";
	}
	return 0;


}