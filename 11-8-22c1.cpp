#include<iostream>
using namespace std;
class car
{
	int price;
	int car_number;
	char car_name[50];
	public:
		void write_carinfo()
		{
			cout<<"enter car name,price,car number=";
			cin>>car_name>>price>>car_number;
			
		}
		void showdata()
		{
			cout<<"\n car name="<<car_name;
			cout<<"\n price="<<price;
			cout<<"\n car number="<<car_number;
		}
		
	
	
};
main()
{
	class car obj;
	obj.write_carinfo();
	obj.show_carinfo();
	return 0;
}

