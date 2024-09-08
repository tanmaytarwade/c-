//destructor
#include<iostream>
using namespace std;
class test{
	private:
		int a,b,c;
	public:
		void get()
		{
			cout<<"enter the elements";
			cin>>a>>b>>c;
		}
		void show()
		{
			cout<<"\n"<<"A="<<a<<"\n"<<"B="<<b<<"\n"<<"C="<<c;
		}
		
		~test(){
			cout<<"\n"<<"the object will be deleted";
		}
};
main()
{
	test t1,t2;
	t1.get();
	t2.get();
	t1.show();
	t2.show();
	
}