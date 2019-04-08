#include<iostream>
using namespace std;
//#include<windows.h>
#include<cstring>
#include<string>
#include<algorithm>
int main()
{
	// in this problem I will use the mod of the 26 
	//I began with try the a %26 in lower and uper case 
	//so I find that a%26 =19  and A%26 =13 ;
	//so if the character in lower case I will mod it by 26 
	//if it in the upper case I will add  six then mod it it will be equal 
	//so If the character is exists in lower or upper case the elemnet  of its mod by 26  will be true 
	// I will check all  the elments in the array if it  true then all character exists in this string 
	int size;
	cin >> size;
	if (size < 26) 
	{
	
		cout << "NO\n ";
		return 0;
	}
	bool arr[26]; 
	for (int i = 0; i < 26; i++) 
	{
		arr[i] = false; 
	
	}
	string s1;
	cin >> s1;
	for (int i = 0; i < size; i++) 
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			arr[s1[i] % 26] = true;
		}
		else
			arr[(s1[i] + 6) % 26] = true;
	}
	for (int i = 0; i < 26; i++) 
	{
		if (arr[i] == false) 
		{
			cout << "NO\n "; 
			return 0;
		}
	
	}
	cout << "Yes\n ";
	return 0;

	/*cout << 96 % 26 << endl;
	cout << 65 % 26 << endl;*/
	/*char A='C'; 
	cout << (A +6)% 26 << endl;
	char a = 'c'; 
	cout << (a  % 26) << endl;
	system("pause");
	return 0;*/
}