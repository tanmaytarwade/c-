/*Write a program scan 1 to 10 numbers and print in words
for example
enter number 2
Two*/
#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the number between 1 to 10";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"One";
			break;
		case 2:
			cout<<"Two";
			break;
		case 3:
			cout<<"Three";
			break;
		case 4:
			cout<<"four";
			break;
		case 5:
			cout<<"Five";
			break;
		case 6:
			cout<<"Six";
			break;
		case 7:
			cout<<"Seven";
			break;
		case 8:
			cout<<"eight";
			break;
		case 9:
			cout<<"nine";
			break;
		case 10:
			cout<<"ten";
			break;
		default:
			cout<<"not in rang";
			
			
	}
}
