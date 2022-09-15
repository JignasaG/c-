//sum of 2 numbers

#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;

 return c;

}
int mul(int a,int b)
{
	int y;
	y=a*b;
	return y;
}

main()
{


	int a,b,s,t;
	cin>>a>>b;
	s=add(a,b);

	t=mul(a,b);
	cout<<s<<endl<<t;

}
