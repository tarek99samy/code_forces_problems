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
	int size;
	cin >> size;
	vector <int >v1(size);
	for (int i = 0; i < size; i++) 
	{
		cin >> v1[i];
	}
	sort(v1.begin(), v1.end());
	int i = 0, j = size - 1;
	long long sum = 0;
	while (j >i ) 
	{
		sum += pow((v1[i++] + v1[j--]), 2); 
	}
	cout << sum << endl;
	return 0;
}
