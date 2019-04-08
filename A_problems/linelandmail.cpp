#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
int main()
{
	int size;
	cin >> size;
	long long  * arr = new long long [size];
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
	
	}
	long long  min = 0, max = 0;
	for (int i = 0; i < size; i++) 
	{
		if (i == 0) 
		{
			min = abs(long long (arr[i] - arr[i + 1]));
			max = abs(long long(arr[i] - arr[size - 1]));
			cout << min << " " << max << endl;
		}
		else if (i==size-1 )
		{
			min = abs(long long (arr[i] - arr[i - 1])); 
			max = abs(long long(arr[i] - arr[0]));
			cout << min << " " << max << endl;
		
		}
		else 
		{
			long long anothermin,anothermax; 
			min = abs(long long(arr[i] - arr[i-1]));
			anothermin=  abs(long long(arr[i] - arr[i+1]));
			max = abs(long long(arr[i] - arr[size-1]));
			anothermax= abs(long long(arr[i] - arr[0]));
			if (anothermin < min)
				min = anothermin;
			if (anothermax > max)
				max = anothermax; 
			cout << min << " " << max << endl;
		
		}
	
	} 
	return 0;


}