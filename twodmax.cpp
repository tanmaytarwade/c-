/*Write a program which define two D array and print maximum number
with row index and column index*/
#include<iostream>
using namespace std;
main()
{
	int a[2][3];
	int max=0;
	cout<<"enter the numbers in arrays";
	
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
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n"<<"the maximum number is:"<<max;
	
}