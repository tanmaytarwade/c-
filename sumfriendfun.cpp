/* Write a program to declare friend function in two classes. Calculate
the sum of integers of both the classes using friend sum() function.*/
#include<iostream>
using namespace std;
class test1{
	private:
		int a,b,c;
	public:
		void get()
		{
			cout<<"enter the two number";
			cin>>a>>b;	
		}
		friend int sum();
	
};
class test2{
	private:
		int a,b,c;
	public:
		void get()
		{
			cout<<"enter the two number";
			cin>>a>>b;	
		}
		friend int sum();
	
};
int sum(test1 obj)
{
	int c=0;
	c=a+b;
	cout<<"\n"<<c;
}
main()
{
	test1 t1;
	test2 t2;
	t1.get();
	t2.sum(t1)
}