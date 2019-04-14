#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{ int k ;
 cin>>k;
	int arr[12] ;
	for(int i =0 ;i<12 ;i++)
	{
	
	cin>>arr[i]; 
	}
	sort(arr,arr+12);
	int i=11,h=0 ;
	int j=k ;
	while(i>=0&&j>0&&k!=0)
	{
	j=j-arr[i] ;
	h++ ;
	i--;
	}
	if(j<=0&&k!=0)
	{
	cout<<h<<endl ;
	
	}
	if(i<0&&k!=0&&j>0)
	{
	cout<<-1<<endl ;
	}
	if(k==0)
	{
	cout<<0<<endl ;
	}
	return 0;
}