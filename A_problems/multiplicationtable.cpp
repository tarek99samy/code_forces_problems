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
int Sum_of_digits(long long num)
{
	int sum = 0;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return num;
}
int main()
{
	int n,count =0;
	cin >> n;
	long long  x; 
	cin >> x;
	int i = 1;
	while (i <=n&&i<=x ) 
	{
		if (x%i == 0) 
		{
			if (x / i <= n) 
			{
				count++;
			}
		
		}
		i++;
	}
	cout << count << endl;
	return 0;
}