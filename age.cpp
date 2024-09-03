/*write a program scan age of person and print person
is major ,minor,or senior citizen*/
#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the age";
	cin>>n;
	if(n<15)
	{
		cout<<"the person is minor";
	}
	else if(n>15 && n<60)
	{
		cout<<"The person is major";
	}
	else
	{
		cout<<"The person is senior citizen";
	}
}
