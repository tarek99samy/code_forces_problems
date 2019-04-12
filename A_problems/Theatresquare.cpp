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
	long long  n,m ,a; 
	cin >> n>>m>>a ;
	long long num = ceil(double(n) / a)*ceil(double(m) / a);
	cout << num << endl;
	return 0;
}
