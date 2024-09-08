/*Write a program scan one string and copy into another string using own function*/
#include<iostream>
using namespace std;
void copy(char s2[],char s1[])
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		s2[j]=s1[i];
		i++;
		j++;
	}
	s2[j]='\0';  //self termination of string
	cout<<"\nMain String="<<s1;
	cout<<"\nCopy String="<<s2;
}
main()
{
	char str1[40],str2[40];
	
	cout<<"\nEnter String";
	gets(str1);
	copy(str2,str1);
	//cout<<"\nMain String="<<str1;
	//cout<<"\nCopy String="<<str2;
}

