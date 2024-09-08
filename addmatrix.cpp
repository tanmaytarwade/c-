/* Write a program which perform addition of two matrix into third matrix.*/
#include<iostream>
using namespace std;
main()
{
	int a[2][3];
	int b[2][3];
	int c[2][3];
	int max=0;
	cout<<"enter the numbers in a arrays";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"enter the numbers in b arrays";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
    }
    for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] =a[i][j] + b[i][j];
			cout<<"\n"<<"the addition is :"<<c[i][j];
		}
		cout<<"\n";
		
    }
	
	
}