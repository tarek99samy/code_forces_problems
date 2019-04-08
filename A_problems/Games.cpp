#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{	
	int size, *home_arr,*guest_arr,num=0;
	cin >> size;
	home_arr = new int[size];
	guest_arr = new int[size];
	for (int i = 0; i < size; i++)
	{
	 cin >> home_arr[i] >> guest_arr[i];
	}
	
	for (int i = 0; i < size; i++) 
	{
	 for (int j = 0; j < size; j++) 
	 {
		if (home_arr[i] == guest_arr[j])
		num++; 
	 }
	}
	 cout << num << endl;
	return 0;
}

