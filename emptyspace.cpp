/*Write a  program scan string and replace empty space with $ sign.*/
#include<iostream>
using namespace std;
main()
{
	char s[50];
	cout<<"enter the string";
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			s[i]='$';
		}
	}
	cout<<s;
}