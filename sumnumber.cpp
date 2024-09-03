//sum of given number
//e.g 123
//6
#include<iostream>
using namespace std;
main()
{
	int n,sum=0;
	int a=1;
	cout<<"enter the number";
	cin>>n;
	while(a<=n)
	{
		sum=sum+n%10;
		n=n/10;
		
		
	}
	cout<<sum;
}