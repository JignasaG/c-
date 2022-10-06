#include<iostream>
using namespace std;
class employee
{
	public:
char name[2366];
int id;
void get()
{
	cout<<"enter the name=";
	cin>>name;
	cout<<"enter the id=";
	cin>>id;
}
};
class show:public employee
{
	public:
	void get1()
		{
			cout<<"id is="<<id<<endl;
			cout<<"name is="<<name<<endl;}
			int da,hra,bs;
			void get2()
			{
			cout<<"enter the name and value of da,hra,bs=";
			cin>>da>>hra>>bs;
		}
};
class print:public show
{public:
	int t_salary;
	void show2()
	{
		cout<<"id is="<<id<<endl;
		t_salary=da+hra+bs;
		cout<<"total salary is="<<t_salary;
	}};
	main()
	{print obj;
	obj.get1();
	obj.get2();
	obj.show2();
	}


