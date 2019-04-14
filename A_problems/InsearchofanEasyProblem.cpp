#include<iostream>
using namespace std ;
int main ()
{
	int n ;
	cin>>n ;
	int *arr=new int [n] ;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i] ;
	
	}
	int i =0 ;
	bool exit=true ;
	while(i<n&&exit)
	{
		if(arr[i]==1)
		{
		
		exit=false ;
		}
		i++;
	
	}
	if(exit==false)
	{
	cout<<"HARD \n" ;
	
	}
	else
	{
	cout<<"EASY \n" ;
	}
return 0 ;
}