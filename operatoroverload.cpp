//operator overloading
#include <iostream>
using namespace std;
class test{
	private:
		int a,b,c;
	public :
		void get()
		{
			a=10;
			b=20;
			c=30;
		
		
		}
		
		void operator-(){
			a=-a;
			b=-b;
			c=-c;
		}
		
		void show(){
			cout<<"\n"<<"A="<<a<<"\n"<<"B="<<b<<"\n"<<"C="<<c;
		}
};
main()
{
	test t1;
	t1.get();
	t1.show();
	t1.operator-();
	t1.show();
	
}