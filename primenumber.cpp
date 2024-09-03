//prime number
#include <iostream>
using namespace std;
main()
{
	int n;
	int flag=1;
	int a=2;
	cout<<"enter the number";
	cin>>n;
	while(a<n)
	{
		if(n%a==0)
		{
			flag= 0;
		}
		else
		{
			flag=1;
		}
		a++;
	}
	if(flag=1)
	{
		cout<<"prime number";
	}
	else
	{
		cout<<"not prime number";
	}
}