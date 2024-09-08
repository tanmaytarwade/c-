//Write a program scan string and count total vowels.
#include<iostream>
#include<string>
using namespace std;
main()
{
	char s[50];
	int count=0;
	cout<<"enter the string";
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			count++;
		}
	}
	cout<<"\n"<<"the total count is:"<<count;
}