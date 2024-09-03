//Write a program scan number and print factorial of number
#include <iostream>
using namespace std;
main()
{
	int n,fact=1;
	cout<<"enter the number";
	cin>>n;
	while(n>=1)
	{
	//	cout<<fact;
		fact = fact*n;
		n--;
		
	}
	cout<<fact;
}