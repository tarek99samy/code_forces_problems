#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{
	string a,a2;
	cin >> a>>a2;
	
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;

		}
		if (a2[i] >= 65 && a2[i] <= 90)
		{
			a2[i] += 32;

		}
		if (a[i] > a2[i]) 
		{
			cout << 1 << endl; 
			return 0; 
		}
		if (a[i] < a2[i])
		{
			cout << -1; 
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;

}

