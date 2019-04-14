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
	if (size == 1) 
	{
		cout << "Poor Alex" << endl;
		return 0;
	}
	int * price = new int[size+1];
	int * quality = new int[size+1];
	for (int i = 0; i < size; i++) 
	{
		int x,y ; 
		cin >> x; 
		price[x] = x;
		cin >> y;
		quality[x] = y;
	
	}
	int i = 1;
	while (i < size) 
	{
		if (quality[i] > quality[i + 1]) 
		{
			cout << "Happy Alex" << endl;
			return 0;
		}
		i++;
	}
	cout << "Poor Alex" << endl; 
	return 0;
}