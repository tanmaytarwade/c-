/*Write a program scan 5 numbers which is combination of positive and negative number
and count total positive number and negative number and print */
#include <iostream>
using namespace std;
main()
{
	int n,m;
	cout<<"enter the number";
	cin>>n;
	int positive=0;
	int negative=0;
	int a=1;
	while(a<=n)
	{
		cin>>m;
		if(m>0)
		{
			positive++;
		}
		else
		{
			negative++;
		}
		a++;
		
	}
	cout<<"\n"<<positive;
	cout<<"\n"<<negative;
}