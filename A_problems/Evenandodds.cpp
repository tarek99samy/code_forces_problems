#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
int main()
{
	//mathematical series 
	//if n is odd so the odd series will contain (n/2)+1;
	long long n, k;
	cin >> n >> k;
	if (n % 2 != 0) 
	{
		long long  count = (n / 2)+1;
		if (k <=count) 
		{
			cout << (1 + (k - 1) * 2) << endl;
			return 0;
		
		}
		k = k - count;
		cout << (2 + (k - 1) * 2) << endl;
		return 0;
	}
	else 
	{
		long long  count = (n / 2) ;
		if (k <=count)
		{
			cout << (1 + (k - 1) * 2) << endl;
			return 0;

		}
		k = k - count;
		cout << (2 + (k - 1) * 2) << endl;
		return 0;
		
	}
}