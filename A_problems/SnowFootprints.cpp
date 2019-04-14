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
#include<cstdlib>
long long GCD(long long A, long long B) 
{
	if (B > A) 
	{
		swap(A, B); 
	}
	long long gcd = A % B;
	if (gcd == 0) 
	{
		return B;
	}
	long long next;
	while (gcd!=0)
	{
		next = gcd;
		A=B;
		B = gcd;
		gcd = A % B;

	}
	return next;

}
int main()
{
	int size;
	cin >> size; 
	string s1;
	cin >> s1;
	int foundR = s1.find('R'); 
	int foundL = s1.find('L');
	if (foundR != s1.npos&&foundL==s1.npos) 
	{
		int foundlastRight = s1.find_last_of('R');
		cout << foundR+1 << " "<<foundlastRight+2<<endl;
	}
	else if(foundR==s1.npos&&foundL!=s1.npos)
	{
		 foundL = s1.find('L');
		int foundlastleft = s1.find_last_of('L');
		cout << foundlastleft+1 << " " << foundL << endl; 
		return 0;
	}
	else 
	{
	
		cout << foundR +1<< "  " << foundL  << endl;
	} 
	return 0;
}