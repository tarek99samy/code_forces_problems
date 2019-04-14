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
	int size;
	cin >> size;
	int * arr = new int[size];
	int countodd = 0, countenven = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 != 0)
		{
			countodd++;
		}
		else
			countenven++;

	}
	if (countenven > countodd)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
				cout << i + 1 << " ";
		}

	}
	else
	{
		for (int i = 0; i < size; i++)
			if (arr[i] % 2 == 0)
				cout << i + 1 << " ";

	}
	system("pause ");
	return 0;
}