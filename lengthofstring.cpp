/*Write a program scan string and calculate the length of string without using
std function*/
#include <iostream>
using namespace std;
int length(char s[50]){
	int i=1;
	int count=0;
	while(s[i]!= '\0')
	{
		count++;
		i++;
	}
	return count;
}
main()
{
	int x;
	char s[50];
	cout<<"enter the string";
	gets(s);
	x=length(s);
	cout<<"\n"<<x;
}
