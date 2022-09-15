#include<iostream>
using namespace std;
main()
{
	int a=189;
	
	cout<<a;
	cout<<&a;
	
	int *b;
	b=&a;
	cout<<b;//address of a
	cout<<*b;//value of the address
}
