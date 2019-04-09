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
	int size;
	cin >> size;
	int * arr = new int[size];
	int sum = 0,ownsum=0,count =0 ;
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + size);
	int i = size-1;
	while ((ownsum <= sum)&&i>=0) 
	{
		count++;
		sum -= arr[i];
		ownsum += arr[i];
		i--;
	}
	cout << count << endl;
	return 0;
}