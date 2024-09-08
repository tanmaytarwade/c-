//Write a program scan string and convert alternate character in upper case
#include<iostream>
using namespace std;
main()
{
	char s[50];
	cout<<"enter the string";
	gets(s);
	char result;
	for(int i=0;i<strlen(s);i++)
	{
		s[2*1] = s[i];
	}
	for(int i=0;i<strlen(s);i++)
	{
		result =strupr(s[i]);
	}
	cout<<result;
}