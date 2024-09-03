//Write a program scan x and y value and perform x^y
#include <iostream>
using namespace std;
main()
{
	int x,y,a=1,ans=1;
	cout<<"enter the x and y";
	cin>>x>>y;
	while(a<=y)
	{
		ans = ans*x;
		a++;
	}
	cout<<ans;
	
}