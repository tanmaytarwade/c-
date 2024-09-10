//friend function
#include<iostream>
using namespace std;
class city{
	private:
		float temp;
	public:
		void get()
		{
			cout<<"enter the temperature";
			cin>>temp;
		}
		void show()
		{
			cout<<"\n"<<temp;
		}
		
		friend class city2;
};

class city2{
	private:
		float temp;
	public:
		void get(city obj)
		{
			cout<<"enter the temperature";
			cin>>temp;
			if(obj.temp>temp)
			{
				cout<<"fisrt city temperature is high"<<obj.temp;
			}
			else{
				cout<<"second city temperature is high"<<temp;
			}
		}
		void show()
		{
			cout<<"\n"<<temp;
		}
		
};
main()
{
	city nashik;
	nashik.get();
	city2 pune;
	pune.get(nashik);
	
	
	
}
