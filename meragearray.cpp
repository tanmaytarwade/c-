//Write a program in C++ to two scan array and merge into third array.
#include<iostream>
using namespace std;
main()
{
	int a[5];
	int b[5];
	int c[10];
	cout<<"enter the five elements in array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the five elements in array";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	
	cout<<"the new array is";
	for(int i=0;i<5;i++)
	{
		c[i]=a[i];
		cout<<"\n"<<c[i];
	
		
	}
	for(int j=0;j<5;j++)
	{
		c[j]=b[j];
		cout<<"\n"<<c[j];
		
	}
	

	
	
	
	
}