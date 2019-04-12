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
#include<cstdlib>
long long GCD(long long A, long long B) 
{
	if (B > A) 
	{
		swap(A, B); 
	}
	long long gcd = A % B;
	if (gcd == 0) 
	{
		return B;
	}
	long long next;
	while (gcd!=0)
	{
		next = gcd;
		A=B;
		B = gcd;
		gcd = A % B;

	}
	return next;

}
int main()
{
	int size,  k;
	cin >> size >> k;
	vector <string >v1(size);
	int count=0;
	bool exit = false ;
	for (int i = 0; i < size; i++) 
	{	
		cin >> v1[i];
	}
	int * arr = new int[k+1];
	for (int i = 0; i < k + 1; i++) 
	{
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < k+1; j++) 
		{
			for (int m = 0; m < v1[i].size(); m++) 
			{
				exit = false;
				if ((v1[i][m] - '0') == arr[j]) 
				{
					exit = true; 
					break;
				}
			}
			if (exit != true)
				break;
		}
		if (exit)
			count++;
		exit = false;
	}
	cout << count << endl;
	return 0;
	

}
