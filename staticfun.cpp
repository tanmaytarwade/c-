//static variable;
#include<iostream>
using namespace std;
class test{
	private:
		int a,b;
		static int count;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b;
		}
		static void show_value()
		{
			count++;
			cout<<"\n count"<<count;
		}
};
int test::count; //defination
main()
{
	test t1,t2,t3;
	t1.get(10,20);
	t2.get(30,40);
	test::show_value();
	t1.show();
	t2.show();
	test::show_value();
	t3.get(60,70);
	t3.show();
	test::show_value();
	
	
	
}