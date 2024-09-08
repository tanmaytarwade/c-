/*Write a program scan two string and join into third string
create your own function */
#include<iostream>
using namespace std;
void concat(char s[50],char s1[50],char s2[50])
{
	int i=0,j=0;
	while(s[i]!='\0')
	{
		s2[j]=s[i];
		i++;
		j++;
	}
	i=0;
	while(s1[i]!='\0')
	{
		s2[j]=s1[i];
		i++;
		j++;
		
		
	}
	s2[j]=='\0';
	cout<<"\n the first string is"<<s;
	cout<<"\n the second string is"<<s1;
	cout<<"\n the concat string is"<<s2;
	
}

main()
{
	char s[50], s1[50], s2[50];
	cout<<"enter the first string";
	gets(s);
	cout<<"enter the second string";
	gets(s1);
	concat(s,s1,s2);
	
}

