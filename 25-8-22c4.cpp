#include<iostream>
using namespace std;
class student
{
	public:
		int a;
		void putdata()
		{
			cout<<"a is="<<a;
		}
};
main()
{
	class student obj,*p;
	p=&obj;
	
	int student::*ptr=&student::a;
	obj.*ptr=12;
	obj.putdata();
	
	p->*ptr=22;
	p->putdata();
}
