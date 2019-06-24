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

	long long n,*arr_a; 
	cin >> n;
	int m, *arr_b;
	cin >> m;
	arr_a = new long long[m];
	arr_b = new int[m];
	for (int i = 0; i < m; i++) 
	{
		cin >> arr_a[i] >> arr_b[i];
	}
	int index;
	for (int i = 0; i < m; i++) 
	{
		index = i;
		for (int j = i+1; j < m; j++) 
		{
			if (arr_b[j] > arr_b[index])
				index = j;
		
		}
		swap(arr_b[i], arr_b[index]);
		swap(arr_a[i], arr_a[index]);
	
	}
	long long max = 0;
	int i = 0;
	while (n != 0 && i < m)
	{
		if (arr_a[i] < n) 
		{
			
			max += (arr_a[i] * arr_b[i]);
			n -= arr_a[i];
		}
		else 
		{
		
			max += (n* arr_b[i]);
			n = 0;
		}
		i++;
	}
	cout << max << endl;
	return 0;
}