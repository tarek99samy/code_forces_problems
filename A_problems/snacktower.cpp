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
	//frequncy array 
	int size,currsize  ; 
	cin >> size;
	currsize = size;
	int * arr = new int[size];
	int i = 0;
	while (currsize>0) 
	{
		int x; 
		cin >> x;
		arr[x - 1] = x;
		if (x != currsize)
			cout << endl;
		else 
		{
			cout << x << " ";
			while (currsize>0) 
			{
				currsize--; 
				if (arr[currsize - 1] == currsize) 
				{
					cout << arr[currsize - 1]<<" ";
				}
				else 
				{
					cout << endl;
					break; 
				}
			}
		}
	
	}
	return 0;
}