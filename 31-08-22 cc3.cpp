#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int n;
	cin>>n;
		cout<<"\n hexadecimal is="<<setbase(16)<<n;
	cout<<"\n octal is="<<oct<<setbase(8)<<n;
	cout<<"\n decimal="<<setbase(10)<<n;

}
