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
int main()
{
	long long  n; 
	cin >> n;
	if (n % 2 == 0) 
	{
		cout << n / 2 << endl;
		return 0;
	}
	else
	{
		cout << -(n + 1) / 2 << endl; 
		return 0;
	}
	return 0;
}
