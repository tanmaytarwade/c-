#include<iostream>
using namespace std;
class Test
{
	private:
		int a,b;
		float c;
	public:
	//Default constructor
	Test()
	{
		a=45;
		c=56.75;
	}
	
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
		
	
};

main()
{
	Test myobj1,myobj2;
	myobj1.show();
	myobj2.show();
	Test test;
	test.show();
	
	
}