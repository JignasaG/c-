//friend classes
#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter the two numbers=";
			cin>>a>>b;
		}
		void sum()
		{
			cout<<"sum is="<<a+b<<endl;
		}
		friend class B;
	
		
};
class B
{
	public:
		void product(A ob)
		{
			cout<<"product is="<<ob.a*ob.b;
		}
};
main()
{
	class A obj1;
	class B obj2;
	obj1.get();
	obj1.sum();
	obj2.product(obj1);
	
}

