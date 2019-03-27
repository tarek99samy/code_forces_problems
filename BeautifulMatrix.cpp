#include<iostream>
using namespace std;
int main() 
{
	int row = 0;
	int coloum = 0;
	int x;
	for (int i =0 ;i<5 ;i++)
	{
		row++;
		for (int j = 0; j < 5; j++) 
		{
			coloum++;
			cin >> x; 
			if (x == 1) 
			{
				int count = abs(3 - row) + abs(3 - coloum);
				cout << count << endl;
				return 0;
			
			}
		
		}
		coloum = 0;
	
	}

}