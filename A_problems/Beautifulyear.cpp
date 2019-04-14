#include<iostream>
#include<string> ;
using namespace std ;
int nextyear(int x) 
{
	
int y=x+1, i=0,j ;
bool exit=true ;
int arr[4] ;
for(i=3;i>=0;i--)
{
arr[i]=y%10 ;
y=y/10 ;

}
i=0 ;
int w=x+1 ;
while(i<4&&exit==true)
{
j=i+1 ;
while(j<4&&exit==true)
{

if(arr[i]==arr[j])
	exit=false ;
else 
	j++ ;
}

i++ ;

}
if(exit==false)
	w=nextyear(w) ;
return w ;


}
int main()
{
	int x ;
	cin>>x ;
	cout<<nextyear(x)<<endl ;

return 0; 
}