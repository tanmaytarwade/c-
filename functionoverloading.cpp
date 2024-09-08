//function overloading
#include<iostream>
using namespace std;
class test{
	private:
		int a,b,c;
		float x,y,z;
	public:
		void add()
		{
			cout<<"enter the values of a and b";
			cin>>a>>b;
			cout<<a+b;
		
		}
		
		int add (int a,int b)
		{
			c=a+b;
			return c;
		}
		
		float add(float x, float y,float z)
		{
			z=x+y;
			cout<<"\n"<<z;
		}
};
main()
{
	test t1,t2;
	t1.add();
	cout<<"\n"<<t1.add(10,20);
	t1.add(1.2,2.2,0.0);
	
}