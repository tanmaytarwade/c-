//C++ Program to Find the Area of shapes using function overloading
#include<iostream>
using namespace std;
class test{
	private:
		int l,b;
	public:
		void shape_area()
		{
			cout<<"enter the elements";
			cin>>l>>b;
			int temp=0;
			temp=l*b;
			cout<<"\n"<<temp;
		}
		void shape_area(int l,int b)
		{
			int temp=0;
			temp=l*b;
			cout<<"\n"<<temp;
		}
};
main()
{
	test t1;
	t1.shape_area();
	t1.shape_area(5,6);
}