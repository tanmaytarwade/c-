/* Write a program of menu drive create menu as 
	1. addition
	2. subtraction
	3. multiplication
create function for addition subtraction and multiplication.*/
#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<a+b;
}
void multiplication(int a, int b)
{
	cout<<a*b;
}
void divide(int a, int b)
{
	cout<<a/b;
}
main()
{
int a;
int b;
int n;
cout<<"1. addition 2. multiplication 3.divide";
cin>>n;
cout<<"\n"<<"enter the a and b value ";
cin>>a>>b;
switch(n)
{
	case 1:
		add(a,b);
		break;
	case 2:
		multiplication(a,b);
		break;
	case 3:
		divide(a,b);
		break;
	default:
		cout<<"envaild operation";
	
}
}
