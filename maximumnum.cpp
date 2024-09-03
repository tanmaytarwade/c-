//Write a program scan 5 numbers and print maximum number

#include <iostream>
using namespace std;
main()
{
	int m,max=0;
	cout<<"enter the number five number";
	int a=1;
	while(a<=5)
	{
		cin>>m;
		if(m>=max)
		max=m;
		a++;
		
	}
	cout<<max;
}