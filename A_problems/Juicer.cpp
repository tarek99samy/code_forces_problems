#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main() 
{	
	int size, b, d,sum=0,count=0;
	cin >> size >> b >> d;
	int  * arr = new int[size];
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
		if (arr[i] > b)
			continue;
		if (sum + arr[i] > d)
		{
			count++;
			sum = 0;
		}
		else
			sum += arr[i];

	
	}
	cout << count;
	return 0;

}

