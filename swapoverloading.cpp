// C++ program to Swap variables using function overloading
#include<iostream>
using namespace std;
class test{
	private:
		int a,b;
	public:
		void swap()
		{
			cout<<"enter the elements";
			cin>>a>>b;
			int temp=0;
			temp=a;
			a=b;
			b=temp;
			cout<<"\n A="<<a<<"\n B="<<b;
		}
		void swap(int a,int b)
		{
			int temp=0;
			temp=a;
			a=b;
			b=temp;
			cout<<"\n A="<<a<<"\n B="<<b;
		}
};
main()
{
	test t1;
	t1.swap();
	t1.swap(10,20);
}