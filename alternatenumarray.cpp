/*Write a program scan a and b array and stored alternate number
into third array.*/
#include<iostream>
using namespace std;
main()
{
	int a[5];
	int b[5];
	int c[10];
	cout<<"enter the a arrays five elements";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the b arrays five elements";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"alternate number";
	for(int i=0;i<5;i++)
	{
		c[2 * i] = a[i];
	    c[2 * i+1] = b[i];
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<"\n"<<c[i];
	}


}
