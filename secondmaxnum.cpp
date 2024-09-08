//Write a program in C++ to find the second largest element in an array.
#include<iostream>
using namespace std;
int max(int a[5]){
	int max=a[0]; // remember this point in array you need to declared first element in array and then start the comparsion
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
			
		
		}
	
	}
	return max-1;
}


main(){
	int a[5];
	cout<<"enter the five array elements";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int maximum=max(a);
	cout<<maximum;

}