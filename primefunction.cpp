/*Write a program print scan number and print number is prime or not using
function*/
#include<iostream>
using namespace std;
void primefun(int n)
{
	int a=2;
	int flag=1;
	while(a<n)
	{
		if(n%a==0)
		{
			flag=1;
		}
		else{
			flag=0;
		}
		a++;
	}
    if(flag=1)
	{
		cout<<"not prime number";
	}
	else
	{
		cout<<"prime number";
	}
}
main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	primefun(n);
}
