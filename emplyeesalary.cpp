/*Write a program create employee class with members 
eno,name and salary
for 3 objects
and print largest salary object data*/
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
	employee e1,e2,e3;
	e1.get();
	e2.get();
	e3.get();
	
	if(e1.sal() > e2.sal() && e1.sal() > e3.sal())
	{
		cout<<"\n the salary of first employee is greater then all the other";
		e1.show();
	}
	else if(e2.sal() > e1.sal() && e2.sal() > e3.sal())
	{
		cout<<"\n the salary of second employee is greater then all the other";
		e2.show();
		
	}
	else{
		cout<<"\n the salary of thrid employee is greater then all the other";
		e3.show();
	}
}


