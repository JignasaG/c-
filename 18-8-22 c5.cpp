//call by reference
#include<iostream>
using namespace std;
main()
{
	int a=189;
		cout<<a<<endl; //189
	
	int &y=a;
	cout<<y<<endl;//189
	
	y=123;
	cout<<a<<endl;//123
}
