//call by address
#include<iostream>
using namespace std;
void swap(int &x,int &b)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"a after the swapping="<<x<<endl;
	cout<<"b after the swapping="<<y<<endl;
	
}
main()
{
	int a,b;
	cout<<"enter the two numbers=";
	cin>>a>>b;
	cout<<"a before the swapping="<<a<<endl;
	cout<<"b before the swapping="<<b<<endl;
	swap(a,b);
	cout<<"a after the swapping in the main="<<a<<endl;
	cout<<"b after the swapping in the main="<<b<<endl;
	
	
}

