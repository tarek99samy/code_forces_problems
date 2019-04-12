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
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int arr[4];
	for (int i = 1; i <= 9; i++) 
	{
		arr[0] = i;
		arr[1] = r1 - i;
		arr[2] = c1 - i;
		arr[3] = d1 - i;
		if (arr[0] >= 10 || arr[1] >= 10 || arr[2] >= 10 || arr[3] >= 10)
			continue;
		if (arr[0] + arr[1] == r1 && arr[0] + arr[2] == c1 && arr[0] + arr[3] == d1&&arr[2]+arr[3]==r2&&arr[1]+arr[2]==d2&&arr[1]+arr[3]==c2&&arr[1]>0&&arr[2]>0&&arr[3]>0) 
		{
			if (arr[0] != arr[1]&&arr[0]!=arr[2]&&arr[0]!=arr[3]&&arr[1]!=arr[2]&&arr[1]!=arr[3]&&arr[2]!=arr[3])
			{
				cout << arr[0] << " " << arr[1] << endl;
				cout << arr[2] << " " << arr[3] << endl;
				return 0;
			}
		}
	}
	cout << "-1" << endl;
	return 0;
	

}
