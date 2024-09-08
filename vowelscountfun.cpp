//Write a program scan string and count total vowels using function.
#include <iostream>
using namespace std;
void vowels(char str[50])
{
	int i=0;
	int count=0;
	while(str[i] !='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
			
		}
		i++;
		
	}
cout<<"\n the total vowels in string are"<<count;

}

main()
{
	int x;
	char str[50];
	cout<<"enter the string";
	gets(str);
	vowels(str);

	
	
}