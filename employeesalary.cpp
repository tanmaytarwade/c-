/*Write a Employee class with member
eno 
name and salary
for two employees and print the information of employees who
got highest salary */
#include<iostream>
using namespace std;
class employee{
	private:
		int eno;
		char name[50];
		int salary;
	public:
		void get()
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
		
		void show()
		{
			cout<<"\n"<<eno;
			cout<<"\n"<<name;
			cout<<"\n"<<salary;
		}
};
main()
{
	employee e1,e2;
	e1.get();
	e2.get();
	
	if(e1.sal() > e2.sal())
	{
		cout<<"\n the salary of first employee is greater then second employee";
		e1.show();
	}
	else{
		cout<<"\n the salary of second employee is greater then first employee";
		e2.show();
	}
}

