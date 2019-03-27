#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{	
	int size,sum =0 ,forces=0,crimes=0; 
	cin >> size;
	int * arr = new int[size]; 
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] != -1) 
		{
			forces += arr[i]; 
		
		}
		else
		{
			if (forces == 0) 
			{
				crimes++;
			}
			else
			{
				forces--;
			}
		}
	}
	cout << crimes << endl;
	return 0;
}

