#include<iostream>
using namespace std;
class car
{
	int car_no;
	char name[40];
	public:
	void jignasa()
	{
		cout<<"enter car name & car no is=";
		cin>>name>>car_no;
	}
	void gowtham()
	{
		cout<<"\n car name is"<<name;
		cout<<"\ncar number is"<<car_no;// car number and name is farrari 123146
	}
};
main()
{
	class car obj;
	obj.jignasa();
	obj.gowtham();
}
