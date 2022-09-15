#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[50];
	
	 public:
	 	void getdata()
	 	{
	 	
	 		cout<<"enter the roll_no and name=";
	 		cin>>roll_no>>name;
	 		
		 }
		  void putdata()
		 {
		 	cout<<"roll_no is="<<roll_no<<endl;
		 	cout<<"name is="<<name<<endl;
		 }
};
main()
{
	class student *p;
	class student obj;
	p=&obj;
	p->getdata();
	p->putdata();
}
