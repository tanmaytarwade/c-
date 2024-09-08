//Write a program in C++ scan string and convert alternate characters in upper case. and print it
#include <iostream>
using namespace std;
main()
{
	char s[50];
	char s1[50];
	cout<<"enter the string";
	gets(s);
	//cout<<"\n"<<strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
	 if(i%2==0)
	 {
	 	s[i]=toupper(s[i]);
	 }
	
	}
	cout<<s;

	
	
	
}