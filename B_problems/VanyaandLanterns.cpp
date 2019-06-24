#include <iostream>
#include <vector>
#include <cstdlib>
#include<cstring >
#include<string >
#include<algorithm >
using namespace std;
int main() {
	int size;
	long long length;
	cin >> size >> length;
	long long *arr = new long long[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	sort(arr, arr + size);
	double  max = 0;
	if (arr[0] != 0)
		max = arr[0];
	if (arr[size - 1] != length)
		if (length-arr[size - 1] > max)
			max = length- arr[size - 1]; 
	for (int i = 0; i < size - 1; i++)
	{
		if (double(arr[i + 1] - arr[i]) / 2 > max)
			max = double(arr[i + 1] - arr[i]) / 2;

	}
	printf("%.7lf\n", max);
	return 0;
}