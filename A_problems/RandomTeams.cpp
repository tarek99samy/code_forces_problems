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
long long fact(long long num) 
{
	long long factorial = 1;
	for (long long i  = 1; i <=num; i++)
		factorial *= i;
	return factorial;
}
long long C(long long r, long long n) 
{
	
	long long num = 1; 
	for (long long i = r; i > r-n; i--) 
	{

		num = num * i;
	
	}
	return num / fact(n);
}
int main()
{
	
	long long n, m;
	cin >> n >> m;
	long long min, max;
	max = C(n-m+1,2);
	long long num = n / m - (n % m);
	min = (m-(n%m))* (C(n / m, 2)) + (n%m)*C((n / m) + 1, 2);
	cout << min <<" "<< max << endl; 
	return 0;
}