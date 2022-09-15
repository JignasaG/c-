#include<iostream>
using namespace std;
class area
{
	float pi;
	int r;
	public:
		area()
		{
			pi=3.14;
			r=5;
		}
		void re()
		{
			cout<<pi*r*r;
		}
};
main()
{
	class area obj;
	obj.re();

}
