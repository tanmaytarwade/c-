/*Write a program scan number and print 
number between 1 to 250
number between 251 to 500
number between 501 to 750
other wise print message number not in 1 to 750*/
#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	if(n>1 && n<=250)
	{
		cout<<"The number between 1 to 250 ";
	}
	else if(n>250 && n<=500)
	{
		cout<<"The number between 251 to 500";
	}
	else if(n>500 && n<=750)
	{
		cout<<"The number between 501 to 750";
	}
	else
	{
		cout<<"The number not in 1 to 750 ";
	}
}