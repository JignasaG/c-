#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
main()
{
	char s[50];
	ofstream obj("gsp.gj",ios::app);
	cout<<"enter the name=";
	gets(s);
	obj<<s;
	cout<<endl;
	obj.close();
}
