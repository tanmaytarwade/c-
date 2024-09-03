/*Write a program which print 
odd series 1..3...5......n*/
#include <iostream>
using namespace std;
main()
{
	int a=1,n;
	cout<<"enter the number";
	cin>>n;
	while(a<=n)
	{
		cout<<a;
		a=a+1;
		a++;
	}
	cout<<a;
}