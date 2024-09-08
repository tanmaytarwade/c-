//Write a program in C++ to scan array and store the all elements square into second array.
#include<iostream>
using namespace std;
main()
{
	int a[5];
	int newarray[5];
	cout<<"enter the five elements";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		newarray[i]=a[i]*a[i];
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n"<<newarray[i];
	}
}