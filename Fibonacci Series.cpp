#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int fib1 = 0, fib2 = 1,fib3, limit, count = 0;
	cout<<"Enter A Limit upto which you want to print Fibonacci Series\n";
	cin>>limit;
	cout<<"Fibonacci Series : \t";
	cout<<fib1<<"\t";
	cout<<fib2<<"\t";
	count = 2;
	while(count <= limit)
	{
		fib3 = fib1 +fib2;
		count++;
		cout<<fib3<<"\t";
		fib1 = fib2;
		fib2 = fib3;
	}

	getch();
}