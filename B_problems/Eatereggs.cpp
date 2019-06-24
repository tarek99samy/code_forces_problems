#include<iostream>
#include<string>
#include<cstring>
using namespace std ;
int main()
{
	string result ; 
	int size ;
	cin>>size ; 
	int count = size /7  ;
	for (int i=0; i<count ;i++ )
		result+="ROYGBIV";  
	count = size % 7 ; 
	if (count ==0)
		return 0 
	else if (count == 1 )
		result.insert(3,"R"); 
		
	else if (count == 2 )
		result.insert(3,"RO");
	else if (count == 3 )
		result.insert(3,"ROY");
	else if (count == 4 )
		result.insert(3,"ROYG");
	else if (count == 5 )
		result.insert(3,"ROYGR");
	else if (count == 6 )	
		result.insert(3,"ROYGRO");
return 0 ; 
	
	
}