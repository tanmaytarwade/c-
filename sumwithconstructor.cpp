//Write a program scan number and pass to constructor and calculate the
//sum of 1   to n numbers
#include<iostream>
using namespace std;
class test{
	private:
			int sum;
	public:
	test(int n)
	{
		sum=0;
	
		for(int i=1;i<=n;i++)
		{
			sum =sum+i;
		}
		cout<<"\n the num is :"<<sum;
	}
};
main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	test t1(n);
}
