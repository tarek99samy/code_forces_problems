#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
int main()
{
	long long x; 
	int num,distress=0; 
	cin >> num >> x;
	for (int i = 0; i < num; i++) 
	{
		
		char temp; 
		cin >> temp;
		long long  j; 
		cin >> j;
		if (temp == '+')
		{
			x += j;
		}
		else 
		{
			if (x >= j)
				x -= j;
			else
				distress++;
		}
	}
	cout << x << " " << distress << endl;
	return 0;
}