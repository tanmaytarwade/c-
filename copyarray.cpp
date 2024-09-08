/*Write a program scan array and copy only positive numbers into
new array and print how many number copied.(IMP)*/
	#include <iostream>
	using namespace std;
	main()
	{
		int a[5];
		int newarray[5];
		int count;
		cout<<"enter the number";
	
		
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
			for(int i=0;i<5;i++)
			{
				cout<<"\n"<<a[i];
				if(a[i]>0)
				{
					newarray[count]=a[i];
					count++;
				}
			}
			for(int i=0;i<=count;i++)
			{
				cout<<"\n"<<newarray[i];
			}
	}
	
