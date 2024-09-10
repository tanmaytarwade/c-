//operator overloading
#include<iostream>
using namespace std;
class Test
{
	private:
	int a;
	float b;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b;
		}
		//operator overloading +
		Test operator +(Test obj)
		{
			Test ans;
			ans.a=a+obj.a;
			ans.b=b+obj.b;
			return(ans);
			
		}
};
main()
{
	
	Test t1,t2,t3;
	t1.get(5,5.46f);
	t2.get(78,2.54f);
	t3=t1+t2; //run + operator overload
	t1.show();
	t2.show();
	cout<<"\n============";
	t3.show();
}
