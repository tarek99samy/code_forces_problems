#include<iostream>
using namespace std ;
int main ()
{

int w ; 
cin>>w ;
int n =1 ;
bool exit =true  ;

while(w>(2*n)&&exit==true)
{
	if((w-(2*n))%2==0&&(w-(w-(2*n)))%2==0)
	{
	
	exit =false  ;
	}
	else 
	n++ ;

}


if (exit==false)
{

cout<<"yes \n "; 

}
else {cout<<"no \n " ;}



return 0 ;
}