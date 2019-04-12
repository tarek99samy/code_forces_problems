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
	if (n == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	n = n % 4;
	if (n == 0)
		cout << 6<<endl ;
	else if (n == 1)
		cout << 8<<endl ;
	else if (n == 2)
		cout << 4<<endl ;
	else
		cout << 2<<endl ;
	return 0;
}
