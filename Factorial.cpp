#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n);
void main()
{
	int num1;
	cout<<"Enter Any Number\n";
	cin>>num1;
	cout<<"Factorial : "<<factorial(num1);
	getch();
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
	return n * factorial(n - 1);
	}
}