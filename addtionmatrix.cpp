//Write a program scan matrix and calculate the addition of matrix elements row wise.
#include<iostream>
using namespace std;
main()
{
	int a[2][3];
	int addition[2][3];
	cout<<"enter the elements in array";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			addition[i][j]=a[i][j]+a[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t"<<addition[i][j];
		}
		cout<<"\n";
	}
	
	
	
}
