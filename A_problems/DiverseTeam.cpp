#include<iostream>
using namespace std ;
int main ()
{
	int n ,k ;
	cin>>n >>k ;
	int *arr=new int[n];
	for(int i =0 ;i<n;i++)
	{
	cin>>arr[i] ;
	
	}
	int *arr2=new int[n] ;
	int *arr3=new int[n]; 
	arr2[0]=arr[0] ;
	arr3[0]=1 ;
	int i=1;
	int l=1;
	int d=1;
	int j=0 ;
	bool exit ;
	for(int i=1;i<n;i++)
	{j=0; exit=true ;
	while(j<l&&exit)
	{
	if(arr[i]==arr2[j])
		exit=false ;
	j++ ;
	}
	if(exit==true)
	{
	arr2[l]=arr[i] ;
	l++ ;
	arr3[d]=i+1 ;
	d++ ;
	
	}
	
	
	
	}
	if (d>=k )
	{
	cout<<"YES \n " ;
	for(int i =0 ;i<k;i++)
		cout<<arr3[i]<<" " ;
	
	}
	else 
		cout<<"NO \n " ;
return 0 ;
}