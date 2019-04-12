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
	bool arr[51];
	for (int i = 0; i < 51; i++) {
		arr[i] = true;
	}
	for (int i = 2; i <=5; i++) 
	{
		for (int j = 2; i*j <= 50; j++) 
		{
			arr[i*j] = false;
		
		}
	
	}
	if (arr[41]==true) 
	{
		cout << "true ";
	}
	system("pause");
	return 0;
}
