/*Write a program create Employee class with members
eno
name
salary
for 5 employees
and calculate the total salary and average salary  of 5 employees*/
#include<iostream>
using namespace std;
class Employee{
	private:
		int eno;
		char name[50];
		int salary;
	public:
		void get_data()
		{
			cout<<"enter the eno";
			cin>>eno;
			cout<<"enter the name";
			cin>>name;
			cout<<"enter the salary";
			cin>>salary;
		}
		
		int sal()
		{
			return(salary);
			
		}
		
		
};
main()
{
	int avarage=0;
	int total=0;
	Employee e1[5];
	for(int i=0;i<5;i++)
	{
		e1[i].get_data();
		total = total+e1[i].sal();
	}
	
	avarage = total/5;
	
	cout<<"\n the toatl salary of five employee is:"<< total;
	
	cout<<"\n the avrage salary of five employee is:"<< avarage;
	
	
	

	
	
}
