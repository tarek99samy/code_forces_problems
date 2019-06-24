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

	int n, a;
	cin >> n >> a;
	int *arr = new int [n];
	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}
	a--;
	int k = a + 1, j = a - 1,count=0;
	if (arr[a] == 1)
		count++;
	while (k < n || j >= 0) 
	{
	
		if (arr[j] == 1 && arr[k] == 1 && j >= 0 && k < n) 
		{
			count += 2;
			j--, k++;
		}
		else if (j < 0) 
		{
			if(arr[k]==1)
				count++;
			k++;
		}
		else if (k >= n) 
		{
			if (arr[j] == 1)
				count++;
			j--;
		}
		else 
		{
			k++, j--; 
		}
	
	}
	cout << count << endl; 
	return 0;
}