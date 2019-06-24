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
#include<memory>
#include<set>
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
long long fact(long long num) 
{
	long long factorial = 1;
	for (long long i  = 1; i <=num; i++)
		factorial *= i;
	return factorial;
}
long long C(long long r, long long n) 
{
	
	long long num = 1; 
	for (long long i = r; i > r-n; i--) 
	{

		num = num * i;
	
	}
	return num / fact(n);
}
int min_three(int n1, int n2, int n3) 
{
	int _min = n1;
	if (n1 < min(n2, n3))
		return n1;
	else 
		return min(n2, n3);
	

}
int Sum_of_digits(long long num)
{
	int sum = 0;
	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return num;
}
int main()
{

	string s1[3]; 

	for (int i = 0; i < 3; i++)
		cin >> s1[i];
	string  max, min;
	for (int i = 0; i < 3; i++) 
	{
		if (s1[i][1] == '<') 
		{
			max+= s1[i][2];
			min+= s1[i][0];
		}
		else 
		{
			max +=s1[i][0];
			min +=s1[i][2];
		}
	}
	char maxchar='\0', meduim='\0', minchar='\0';
	for (int i = 0; i < 3; i++) 
	{
		int count = 0;
		for (int j = 0; j < 3; j++) 
		{
			if (max[i] == max[j])
				count++;
		
		}
		if (count == 2)
		{
			maxchar = max[i];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		for (int j = 0; j < 3; j++)
		{
			if (min[i] == min[j])
				count++;

		}
		if (count == 2)
		{
			minchar = min[i];
		}
	}
	for (int i = 0; i < 3; i++) 
	{
		if (minchar != min[i]) 
		{
			meduim = min[i];
		}
		if (maxchar != max[i]) 
		{
			meduim = max[i]; 
		}
	}
	if (maxchar != '\0'&&meduim != '\0'&&minchar!='\0') 
	{
	
		cout << minchar << meduim << maxchar << endl;
	
	}
	else 
	{
	
		cout << "Impossible";
	}
	return 0;
}