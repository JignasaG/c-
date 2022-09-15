#include<iostream>
using namespace std;
void difference()
{
	static int a=1;
	a--;
	cout<<a<<endl;
}
main()
{
	difference();
	difference();
difference();
	
}
