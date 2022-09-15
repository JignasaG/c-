#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[30];
	int e,mh,s;
	public:
		void getdata()
		{
			cout<<"enter the roll number&name=";
			cin>>roll_no>>name;
			cout<<"enter the marks in e,mh,s=";
			cin>>e>>mh>>s;
		}
		void putdata()
		{
		
		cout<<"\n roll number ="<<roll_no;
		cout<<"\n name is="<<name;
		cout<<"\n marks in english is="<<e;
		cout<<"\n marks in mth is="<<mh;
		cout<<"\n marks in sci is="<<s;
		}
		
		};
		main()
		
		{
		
		class student k;
		k.getdata();
		k.putdata();	
	}
