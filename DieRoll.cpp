#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main() 
{	
	int Y, W,probability;
	cin >> Y >> W;
	if (Y == W == 6) 
	{
		cout << "0/6" << endl;
		return 0;
	}
	if (Y > W)
		probability = 6 - Y + 1;
	else
		probability = 6 - W + 1;
	if (6 % probability == 0) 
	{
		cout << 1 << "/" << 6 / probability << endl;
	
	}
	else 
	{
		if (probability == 4) 
		{
			cout << 2 << "/" << 3 << endl;

		}
		else 
		{
			cout << 5 << "/" << 6 << endl;
		}
		
	}
	return 0;

}

