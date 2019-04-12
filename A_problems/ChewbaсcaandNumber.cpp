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
	long long  num;
	cin >> num;
	int  arr[19], i = 18;
	if (num < 10) 
	{
		cout << num; 
		return 0;
	}
	while (num != 0) 
	{
		arr[i] = num % 10;
		num /= 10;
		i--;
	}
	i++;
	int j = i;

	if (arr[j] != 9 &&arr[j] >= 5) 
	{
		arr[j] = 9 - arr[j];
	}
	j++;
	for (j; j < 19; j++) 
	{
		if (arr[j] >= 5)
			arr[j] = 9 - arr[j];
	}
	for (i; i< 19; i++) 
	{

		cout << arr[i];
	}
	return 0;
}
