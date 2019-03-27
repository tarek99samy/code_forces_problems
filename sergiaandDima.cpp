#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{
	int size;
	cin >> size;
	int * arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	int i = 0, j = size - 1, ser_sum = 0, di_sum = 0, count = 1;
	while (i <= j) 
	{
		if (arr[i] > arr[j]) 
		{
			if (count % 2 != 0)
				ser_sum += arr[i];
			else
				di_sum += arr[i];
			i++;

		}
		else
		{
			if (count % 2 != 0)
				ser_sum += arr[j];
			else
				di_sum += arr[j];
			j--;

		}
		count++;
	}
	cout << ser_sum << " " << di_sum << endl;
	return 0;
}

