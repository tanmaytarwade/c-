/*Write a program which calculate the odd numbers and even numbers sum 
and print both sum*/
#include <iostream>
using namespace std;
main()
{
	int n;
	int a=1;
	int m;
	int evensum =0;
	int oddsum=0;
	cout<<"enter the number";
	cin>>n;
	while(a<=n)
	{
		cin>>m;
		if(m%2==0)
		{
			evensum = evensum+m;
		}
		else
		{
			oddsum=oddsum+m;
			
		}
		a++;
	}
	cout<<"\n"<<evensum;
	cout<<"\n"<<oddsum;
}
