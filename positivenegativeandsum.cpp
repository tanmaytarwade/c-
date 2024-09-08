/*Write a program scan 10 elements for array
	count total positive numbers
	count total negative numbers
	and the sum of all array elements.*/
	#include <iostream>
	using namespace std;
	main()
	{
		int i,a[10],sum=0;
		int positive=0;
		int negative=0;
		cout<<"enter the 10 elements in array";
		for(int i=0;i<=10;i++)
		{
			cin>>a[i];
			if(a[i]>0)
			{
				positive++;
			}
			else if(a[i]<0)
			{
				negative++;
			}
			else
			{
				cout<<"the number is zero";
			}
			sum =sum+a[i]%10;
			a[i]=a[i]/10;
			
			
			
			
		}
		    cout<<"\n"<<positive;
			cout<<"\n"<<negative;
			cout<<"\n"<<sum;
	}