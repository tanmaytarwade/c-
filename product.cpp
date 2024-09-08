/*Write a program create product class with member
product name
rate 
quantity 
amount=rate* quantity
for 3 objects.*/
#include <iostream>
using namespace std;
class product{
	private:
		char prd_name[50];
		int rate;
		int quantity;
		int amount =0;
	public:
		void get_data()
		{
			cout<<"\n"<<"enter the product name";
			cin>>prd_name;
			cout<<"\n"<<"enter the rate";
			cin>>rate;
			cout<<"\n"<<"enter the quantity";
			cin>>quantity;
		}
		
		void process(){
			amount=rate* quantity;
			cout<<"\n"<<"the amount of product is :"<<amount;
		}
		
		void show()
		{
			cout<<"\n"<<"product name:"<<prd_name;
			cout<<"\n"<<"rate:"<<rate;
			cout<<"\n"<<"quantity:"<<quantity;
			cout <<"\n"<<"amount"<<amount;
		}
};
main()
{
	product p1,p2,p3;
	p1.get_data();
	p1.process();
	p1.show();
	p2.get_data();
	p2.process();
	p2.show();
	p3.get_data();
	p3.process();
	p3.show();
	
}
