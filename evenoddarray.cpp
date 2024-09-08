//.Write a program in C++ to separate odd and even integers into separate arrays.
#include<iostream>
using namespace std;
main()
{
	int a[5];
	int evenarray[5];
	int oddarray[5];
	int evencount;
	int oddcount;
	cout<<"enter the array five elements in array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			evenarray[evencount]=a[i];
			evencount++;
		}
		else{
			oddarray[oddcount]=a[i];
			oddcount++;
		}
	}
	
	cout<<"\n"<<"even count of elements";
	for(int i=0;i<evencount;i++)
	{
		cout<<"\n"<<evenarray[i];
	}
	
	cout<<"\n"<<"odd count of elements";
	for(int i=0;i<oddcount;i++)
	{
		cout<<"\n"<<oddarray[i];
	}
	
	return 0;
}