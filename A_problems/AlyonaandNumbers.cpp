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
	int n, m;
	long long count;
	cin >> n >> m;
	if (n>m)
		swap(n, m);
	count = (n*(long long  (m/5))) +((m % 5)*(long long (n / 5)));// the casting is very imporatant here 
	int size1 = n % 5,size2 =m%5;
	if (size1==4||size2==4 )
	{
		count += min(size1, size2);
	}
	else if (size2 == 3&&size1>1) 
	{
		
		count += (size1 - 1);
	
	}
	else if (size2 ==2&&size1>2) 
	{
		count += (size1 - 2);
	
	}
	else 
	{
		if (size1 == 4)
			count++;
	}
	cout << count << endl;
	return 0;
	

}
