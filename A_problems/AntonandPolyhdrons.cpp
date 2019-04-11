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
	int size,sh1=0,sh2=0,sh3=0,sh4=0,sh5=0; 
	cin >> size;
	string s1;
	for (int i = 0; i < size; i++) 
	{
		cin >> s1;
		if (s1 == "Tetrahedron")
			sh1++;
		else if (s1 == "Cube")
			sh2++;
		else if (s1 == "Octahedron")
			sh3++;
		else if (s1=="Dodecahedron")
			sh4++;
		else
			sh5++;
	
	}
	long long num = (4 * sh1) + (6 * sh2) + (8 * sh3) + (12 * sh4) + (20 * sh5);
	cout << num << endl;
	return 0;
}
