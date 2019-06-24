#include<iostream>
#include<string>
#include<cstring>
using namespace  std ;
int main ()
{
	string s1,s2 ;
	int size; 
	cin>>size ;
	cin>>s1 ;


	int i =s1.size()-1 ;
	while (i>=0)
	{
		if(s2.size()==0)
		{
			s2+=s1[i] ;
		}
		else 
			s2.insert(s2.begin()+(s2.size()/2),s1[i]);
		i-- ;
	
	}
	cout<<s2<<endl;
	return 0 ;
}