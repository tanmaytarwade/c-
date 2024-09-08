//Write a program scan matrix and print maximum number with row index and column index
#include<iostream>
using namespace std;
main()
{
	int a[2][3];
	int max;
	cout<<"enter the elements in array";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	max=a[0][0];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	cout<<"\n"<< max;
}
	
	