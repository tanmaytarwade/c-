
#include<iostream>
using namespace std;
class point
{
	private:
			int a,b;
			float c;
	public:
		//default  constructor
		point()
		{
			a=100;
			b=500;
			c=2.2;
		}
		
		//parameterized constructor
		point(int x)
		{
			b=x*x;
		}
		point(int x,int y,float z )
		{
			a=x;
			b=y;
			c=z;
		}
		void show()
		{
		cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
	
};

main()
{

point p2(10,20,3.3);
p2.show();
point p3(2);
p3.show();
point p1;
p1.show();
	
}