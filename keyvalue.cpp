/*Write a program scan array
scan key value
search key value present inside the  array if present then print index.
if key value not present the print message value not present inside the array.
(with return)*/
#include <iostream>
using namespace std;
int fun(int a[5],int keyvalue)
{
	for(int i=0;i<5;i++){
		if(a[i]==keyvalue)
		{
			cout<<"the value is present in array at position"<<i;
		}
		else{
			cout<<"value is not present in array";
		}
		return a[i];
	}
//	return a[i];
}
main()
{
	int a[5],keyvalue;
	cout<<"enter the 5 values in array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the key value";
	cin>>keyvalue;
	fun(a,keyvalue);
	
}
