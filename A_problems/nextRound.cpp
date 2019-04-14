#include<iostream>
using namespace std ;
int main ()
{

int n ,k;
cin>>n>>k ;
int *data =new int[n];
for(int i=0;i<n;i++)
{
cin>>data[i] ;

}
int l=0; 
for(int i =0;i<n;i++)
{

	if(data[i]>=data[k-1]&&data[i]>0)
	{
	
	l++ ;
	}

}
cout<<l<<endl; 

return 0 ;

}