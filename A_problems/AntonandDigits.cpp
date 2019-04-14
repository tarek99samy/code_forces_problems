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
int min_three(int n1, int n2, int n3) 
{
	int _min = n1;
	if (n1 < min(n2, n3))
		return n1;
	else 
		return min(n2, n3);
	

}
int main()
{
	
	int k1, k2, k3, k4;
	cin >> k1 >> k2 >> k3 >> k4;
	
	int num =min_three(k1, k3, k4);
	long long sum = (num * 256);
	k1 -= num, k3 -= num, k4 -= num;
	sum += 32*min(k1, k2);
	cout << sum << endl;
	return 0;
}