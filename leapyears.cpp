//Write a program which print all leap years between 2000 to 2020
//and print count,
#include <iostream>
using namespace std;
main()
{
	int a=2000;
	int n =2020;
	while(a<=n)
	{
		if(a%4==0)
		{
			cout<<"\n"<<a<<"leap year";
		}
		else{
			cout<<a<<"not leap years";
		}
		a++;
	}
}