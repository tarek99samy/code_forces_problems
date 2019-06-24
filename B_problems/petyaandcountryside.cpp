#include<iostream>
#include<string>
#include<cstring>
#include<vector>
using namespace  std ;
int main ()
{
	int size ;
	cin>>size ;
	if(size==1)
	{
		cout<<"1"<<endl ;
		return 0 ;
	}
	vector<int >v1 (size) ;
	for (int i =0 ;i<size ;i++)
	{
		cin>>v1[i] ; 
	}
	int Max=INT_MIN ;
	for (int i =0 ;i<size ;i++)
	{
		int count=1 ;
		int j =i  ;
		while (j>0&&v1[j-1]<=v1[j])
		{
			count++;
			j-- ; 
		}
		j=i ; 
		while (j<size-1&&v1[j+1]<=v1[j])
		{
			count++ ;
			j++ ;
		}
		if(count>Max)
		{
			Max=count ;
		}
	}
	
	cout<<Max<<endl ;
	return 0 ;
}