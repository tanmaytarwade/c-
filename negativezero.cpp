/*Write a program scan array which is a combination of positive and negative
numbers replace all negative number by Zero(0) and print total replacement.*/
#include<iostream>
using namespace std;
main()
{
	int a[5];
	int count;
	cout<<"enter the numbers in array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			count++;
			a[i]=0;
			
		}
		cout<<"\n"<<a[i];
	}
	cout<<"\n"<<"total replacements"<<count;
	
	
}