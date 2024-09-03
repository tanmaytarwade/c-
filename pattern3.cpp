#include<iostream>
using namespace std;
main()
{
	int n;
	char ch;
	char ch1;
	cout<<"enter the number";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ch=65;
		ch1=97;
		for(int j=1;j<=i;j++)
		{
			cout<<ch<<ch1;
			ch++;
			ch1++;
		}
		cout<<"\n";
		
    }
   

}