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
	vector <int >v2(size);
	vector<int >v3(size); // for check ..
	for (int i = 0; i < size; i++) 
	{
		cin >> v1[i] >> v2[i];
		if (v1[i] != v2[i])
		{
			cout << "rated\n ";
			return 0;
		}
		v3[i] = v2[i];

	}
	sort(v3.begin(), v3.end());
	for (int i = 0; i < size; i++) 
	{
		if (v1[i] != v3[size-i-1]) 
		{
			cout << "unrated\n ";
			return 0;
		}
	}
	cout << "maybe\n ";
	return 0;
		
	
}