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
#include<memory>
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
	int cups=0, medals=0, shelves;
	for (int i = 0; i < 3; i++) 
	{
		int x;
		cin >> x;
		cups += x;
	}
	for (int i = 0; i < 3; i++) 
	{
		int x; 
		cin >> x;
		medals += x;
	}
	cin >> shelves;
	if (cups % 5 == 0)
		shelves -= cups / 5;
	else
		shelves -= (cups / 5 + 1);
	if (medals % 10 == 0)
		shelves -= medals / 10;
	else
		shelves -= medals / 10 + 1;
	if (shelves < 0)
		cout << "NO\n ";
	else
		cout << "YES\n ";
	return 0;
}