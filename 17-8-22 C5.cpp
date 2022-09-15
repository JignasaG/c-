#include<iostream>
using namespace std;
class roll_no
{
	int roll_no;
	char name[40];
	static int count;
	
		public:
			void get()
			{ 
			count++;
			cout<<"enter roll_no and name=";
			cin>>roll_no>>name;
			}
			static void show()
			{
				cout<<"\n calling is="<<count;
			}
};

int student::count=0;
main()
{
	class student obj1;
	obj1.get();
	obj1.get();
	obj1.get();
	obj1.student::show();
}



