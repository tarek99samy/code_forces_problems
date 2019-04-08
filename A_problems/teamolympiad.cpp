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

	int * arr = new int [size],ones=0,twos=0,threes=0;
	
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == 1)
			ones++;
		else if (arr[i] == 2)
			twos++;
		else
			threes++;
	}
	int count = ones;
	if (twos < count)
		count = twos;
	if (threes < count)
		count = threes;
	int *one = new int[ones];
	int *two = new int[twos];
	int* three = new int[threes];
	ones = twos = threes = 0;
	for (int i = 0; i < size; i++) 
	{
	
		if (arr[i] == 1)
			one[ones++] = i;
		else if (arr[i] == 2)
			two[twos++] = i;
		else
			three[threes++] = i;
	}
	cout << count << endl;
	for (int i = 0; i < count; i++) 
	{
		cout << one[i]+1 << " " << two[i]+1 << " " << three[i]+1 << endl;
	}
	return 0;
}