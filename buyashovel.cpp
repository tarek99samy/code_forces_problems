#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{	
	int k, r;
	cin >> k >> r;
	int min = 1; 
	while (true) 
	{
		
		if ((k*min) % 10 == r||(k*min%10==0 ))
			break;
		min++;
	}
	cout << min << endl;
	return 0;
}

