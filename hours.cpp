//Write a program scan hrs and convert in min and seconds
#include<iostream>
using namespace std;
main()
{
	cout<<"enter the hours";
	int hrs,min,sec;
	cin>>hrs;
	min = hrs*60;
	sec = min*60;
	
	cout<<"\nmin :"<<min;
	cout<<"\nsec :"<<sec;
}