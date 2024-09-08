//Write a program which scan number and calculate the factorial of number
//using function
#include<iostream>
using namespace std;
void fact(int n)
{
	int a=1;
	int ans=1;
	while(n>a)
	{
	
	//int ans;
	ans = ans*n;
	n--;
	
	//cout<<"\n"<<ans;
    }
    cout<<"\n"<<ans;
	
	
}
main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	fact(n);
	
}