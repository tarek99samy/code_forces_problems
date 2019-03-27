#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() 
{	
	string s1;
	cin >> s1;
	int x = 97, count = 0;
	for (short int i = 0; i < s1.size(); i++) 
	{
		int rev_dis;//reverse distance  
		int dis = abs(x - s1[i]);
		if (s1[i] > x)
			rev_dis = (x - 97 + (122 - s1[i]+1));
		else
		{
			rev_dis = (122 - x + (s1[i] - 97+1)); 
		}
		if (dis < rev_dis)
			count += dis;
		else
			count += rev_dis;
		x = s1[i];
	
	}
	cout << count << endl;
	return 0;
}

