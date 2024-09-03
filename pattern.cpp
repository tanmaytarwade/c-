#include<iostream>
using namespace std;
main()
{
	int n;
	char ch;
	cout<<"enter the number";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ch=65;
		for(int j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		cout<<"\n";
		
    }
   

}