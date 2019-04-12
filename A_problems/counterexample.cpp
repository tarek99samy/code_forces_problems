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
	long long r, l; 
	cin >> l >> r; 
	int num = r - l;
	while (r - l>=2)
	{
		if (GCD(l, l + 1) == 1 && GCD(l + 1, l + 2) == 1 && GCD(l, l + 2) != 1) 
		{
			cout << l << " " << l + 1 << " " << l + 2 << endl;
			return 0;
		}
		l++;
	
	}
	cout << -1 << endl;
	return 0;
}
