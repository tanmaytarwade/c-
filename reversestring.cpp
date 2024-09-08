//Write a program in C++ scan string and print in reverse formart using index.
#include <iostream>
using namespace std;
main()
{
	char s[50];
	cout<<"enter the string";
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		cout<<s[i];
	}
	cout<<"\n";
	for(int j=strlen(s);j>=0;j--)
	{
		cout<<s[j];
	}
}
