//Write a program in C++ to find the maximum and minimum elements in an array with index.
#include<iostream>
using namespace std;
int max(int a[5]){
	int max=a[0]; // remember this point in array you need to declared first element in array and then start the comparsion
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
			
		
		}
	
	}
	return max;
}

int mimimum(int a[5])
{
	int min=a[0];
	for(int i=0;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
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
	
	int minmum = mimimum(a);
	cout<<minmum;
}