//Write a program scan number and print table as following format
#include <iostream>
using namespace std;
main()
{
	int n,a=1 ,table;
	cout<<"enter the number";
	cin>>n;
	while(a<=10)
	{
		table=a*n;
		cout<<"\n"<<table;
		a++;
		
	}
}

