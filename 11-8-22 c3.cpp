//friend function
//sum of the two numbers
#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		friend void add(A ob);   //prototype
	
		
};
void add(A ob)
{
	ob.a=50;
	ob.b=20;
	cout<<"sum is="<<ob.a+ob.b;
}
main()
{
	class A obj;
	add(obj);
}
