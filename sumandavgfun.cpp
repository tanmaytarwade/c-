/*3. Write a program scan array and calculate the sum and average of 
array elements using function(with return)
sum and avg calculate in function
print sum inside the function
return avg in main program*/
#include <iostream>
using namespace std;
int sum(int a[5])
{
	int s=0;
	for(int i=0;i<5;i++)
	{
		s=s+a[i];
	}
	return s;
}
main()
{
	int x;
	int a[5];
	cout<<"enter the five elements in array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	x=sum(a);
	cout<<"\n the sum of number in array"<<x;
	int avg=0;
	avg=x/5;
	cout<<"\n the avrage of array is"<<avg;
	
}