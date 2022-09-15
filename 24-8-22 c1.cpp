//recursion
//when fn calls itself again and again is called recursion
//factorial of the number
#include<iostream>
using namespace std;
int fun( int n)
{
	if (n==1)
	return 14;
	else 
	return n*fun(n-1);
	
}
main()
{
	int n,f;
	cout<<"enter the numbers=";
	cin>>n;
	f=fun(n);
	cout<<"factorial is="<<f;
}
 

