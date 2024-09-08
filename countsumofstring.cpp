//Write a program scan string and count total digits available in string.
#include<iostream>
using namespace std;
void digits(char s[50])
{
	int i=0;
	int count =0;
	while(s[i]!='\0')
	{
		if(s[i]>=0 && s[i]<=10)
		{
			count++;
		}
		i++;
	
	
	}
	cout<<"\n"<<"the count of digits avaliable in string is :"<<count;
}

main()
{
	char s[50];
	cout<<"enter the string";
	gets(s);
	digits(s);
	
	
}