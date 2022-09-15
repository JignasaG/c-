//copy constructor
#include<iostream>
using namespace std;
class counter    //default constructor 
{
	int c;
	public:
	counter();
	counter(int a)
	{
    c=a;
	}
	counter(counter &ob)
	{
		cout<<"copy constructor called";
		c=ob.c;
	}
	void show()
	{
		cout<<c<<endl;	
		}
};
main()
{
	class counter obj(5);
	obj.show();
	class counter obj2(obj);
	obj2.show();
}
