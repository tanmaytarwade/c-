//Write a program which scan number and print total unit places.
//Enter Number 12
//unit place 2
#include <iostream>
using namespace std;
main()
{
	int n,a=1;
	int unitplace=1;
	cout<<"enter the number";
	cin>>n;
	if(n<10)
	{
		cout<<"unit place is :"<<1;
	}
	else
	{
	 unitplace = n%10;
	 cout<<unitplace;
	}
}