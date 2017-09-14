#include<conio.h>
#include<iostream>
using namespace std;
void main()
{
	
	int arr[]= {100,56,98,89,97};
	int *p;
	p = arr; 
	
	cout<<"P = "<<p<<"\t Arr = "<<arr;
	cout<<"\n";
	for(int i = 0; i<5 ;i++)
	{
		cout<<"*(p+i) = "<<*(p+i)<<"\n"; 
		cout<<"Value at Base Address :"<<*(arr)<<"\n";
	
	}
		for(int i = 0; i<5 ;i++)
	{
		cout<<"*(arr + i) = "<<*(arr + i)<<"\n";
	
	}	
		getch();
}