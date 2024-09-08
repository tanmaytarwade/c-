/* Write a program which replace all negative value from matrix
 by 0 and print total replacement*/
 #include <iostream>
 using namespace std;
main()
{
	int a[2][3];
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
			if(a[i][j]<0)
			{
				a[i][j] = 0;
			//	cout<<"\t"<<a[i][j];
				
			}
			cout<<"\t"<<a[i][j];
		}
	}
	
}
