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
	string s1,s2;
	cin >> s1;
	int right = s1.find('|'), left = s1.size() - right - 1;
	cin >> s2;
	if (s2.size() < abs(right - left)) 
	{
		cout<< "Impossible" << endl;
		return 0;
	}
	if (((s2.size() - abs(right - left)) % 2) != 0)
	{
		cout << "Impossible" << endl;
		return 0;
	
	}
	while (right != left) 
	{
	
		if (right < left) 
		{
			s1.insert(s1.begin() + right, s2[0]);
			s2.erase(s2.begin());
			right++;
		
		}
		else 
		{
			s1 += s2[0];
			s2.erase(s2.begin());
			left++;
		
		}
	}
	int i = 0;
	while (s2.size()!=0)
	{
		if (i % 2 == 0) 
		{
			s1.insert(s1.begin() + right, s2[0]);
			s2.erase(s2.begin());
			right++;

		}
		else 
		{
			s1 += s2[0];
			s2.erase(s2.begin());
			left++;
		}
		i++;
	}
	cout << s1 << endl;
	return 0;
	
	

}
