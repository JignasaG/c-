//hybrid inheritance
#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	A()
	{
		cout<<"enter the value of a & b=";
		cin>>a>>b;
		
}
};
class B:public A
{
	public:
	void sum()
	{
		cout<<"sum of a and b is="<<a+b;
	}
};
class C
{ 
public:
	int c;
	C()
	{
		cout<<"enter the value of c=";
		cin>>c;
	}
};
class D :public B,public C
{
	public:
		void mul(){
			cout<<"the multiplication of a b and c="<<a*b*c;
			cin>>a>>b>>c;
		}
		
};
main()
{
	D obj;
	obj.sum();
	obj.mul();
}

