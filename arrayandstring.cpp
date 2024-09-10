/*1. Write a program create a menu as
	1.  One Dimensional Array
	2.  String
In First case 
Scan array for 10 Elements 
	Sort the Array Elements and stored in new array.Print original and sorted array.

In Second case 
	Scan string and stored in reverse format in new string. print both string.*/
#include<iostream>
using namespace std;
void sortarray(int a[10])
{
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++){
			if(a[i]>a[j])
			{
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<"\n"<<a[i];
	}
	

}

void reversestring(char s[10])
{
	for(int i=strlen(s);i>0;i--)
	{
		cout<<"\n"<<s[i];
	}
	
}
main()
{
int num;
int newarray[10];
char s[10];
cout<<"enter the string";
gets(s);

int a[10];
cout<<"enter the 10 array elements";
for(int i=0;i<10;i++)
{
	cin>>a[i];	
}

cout<<"\n"<<"1.sorted array";
cout<<"\n"<<"1.reverse string";

cin>>num;




switch(num)
{
	case 1:
		sortarray(a);
		break;
	case 2:
		reversestring(s);
		break;
	default:
		cout<<"\n"<<"invalid case";
	
		
		
}

}
