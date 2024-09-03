/*Write a program accept student information
rollno, name of student, 3 subjects marks, 
calculate total marks and 
calculate perentage*/
#include <iostream>
using namespace std;
main()
{
	int rollno;
	char name[10];
	float percentage;
	int maths,english,science,total;
	cout<<"enter the rollno";
	cin>>rollno;
	cout<<"enter the name";
	cin>>name;
	cout<<"enter the marks obtain in maths";
	cin>>maths;
	cout<<"enter the marks obtain in english";
	cin>>english;
	cout<<"enter the marks obtain in science";
	cin>>science;
	
	total =maths + english + science;
	percentage = total /  3.0; // remeber the first step
	cout<<"your percentage is :"<<percentage;

	
	
}
