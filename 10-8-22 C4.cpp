//create a class with name: student,take the value of roll number and name 
//from the user and print those value using member function
#include<iostream>
using namespace std;
class student
{
	int rollnumber;
	char name[80];
	public:
	void getdata()
	{
		cout<<"enter the values of roll number and name=";
		cin>>rollnumber>>name;
		
	}
void showdata()
{
cout<<"/n roll number is="<<rollnumber;
cout<<"/n name is="<<name;
		
}
};
main()
{
	class student obj;
	obj.getdata();
	obj.showdata();
	
	
}
