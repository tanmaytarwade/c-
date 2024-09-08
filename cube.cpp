//write a program which print cube of 1 to 5 number using function
#include<iostream>
using namespace std;
void cube()
{
	int ans,a=1;
	while(a<=5)
	{
		ans = a*a*a;
		cout<<"\n"<<ans;
		a++;
	}
}
main()
{
	
	cout<<"cube of 1 to 5";
	cube();
	
	
}
