//Write a program scan array replace all elements with their sum of digit.
#include <iostream>
using namespace std;
int sum(int a[5])
{
	int s=0;
	for(int i=0;i<5;i++)
	{
		s=s+a[i];
	}
	return s;
	
}

void copy(int a1[5],int x)
{
	for(int i=0;i<5;i++)
	{
		a1[i]=x;
		cout<<"\n"<<a1[i];
	
		
	}
	
}
main()
{
	int x;
	int a[5];
	int a1[5];
	cout<<"enter the five elements in array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	x=sum(a);
	cout<<"\n the sum of number in array"<<x;
	copy(a1,x);
	//cout<<"the new array is ";
}