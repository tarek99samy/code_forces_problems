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
		cout << "YES\n ";
		return 0; 
	}

	vector<int >v1(size);
	for (int i = 0; i < size; i++) 
	{
		cin >> v1[i];
	}
	sort(v1.begin(), v1.end());
	int Max = 0;
	int count=0 ;
	int i = 0, j = i;
	while (i < v1.size()) 
	{
		count = 1;
		while (i < v1.size() - 1 && v1[i] == v1[i + 1])
		{
			count++;
			i++; 
		}
		
		if (count  > Max&&count!=0)
			Max = count ;
		
		i++; 
	}
	if (Max > ceil(size /2.0))
		cout << "NO" << endl; 
	else 
	{
		cout << "YES\n ";
	}
	return 0;
}