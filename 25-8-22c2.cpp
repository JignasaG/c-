#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int roll_no;
	char name[40];
	public:
		void getdata(int x,char y[])
		{
			roll_no=x;
			strcpy(name,y);
		
		}
		void putdata()
		{
			cout<<"roll_no is="<<roll_no<<endl;
			cout<<"name is="<<name;
			
		}
};
main()
{
	class student obj[5];
	int rn; //rn=roll number
	char n[40];
int i;
for(i=1;i<=5;i++)
{

	cout<<"enter the roll-no and name=";
	cin>>rn>>n;
	obj[1].getdata(rn,n);
}
cout<<"\n \n";
for(i=1;i<=5;i++)
{
obj[1].putdata();	
}
}






















