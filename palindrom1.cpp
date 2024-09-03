//Write a program scan number and print number is palindrome or not
#include<iostream>
using namespace std;
main()
{
	int n,num;
	cout<<"enter the number";
	cin>>n;
	int a=1;
	while(n>=a)
	{
		num = n%10;
		n = n/10;
		
	}
	cout<<num;
	if(n==num)
	{
		cout<<"number is palindrom";
	}
	else
	{
		cout<<"number is not palindrom";
	}
}
