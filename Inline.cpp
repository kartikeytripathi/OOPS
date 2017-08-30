#include<iostream>
#include<conio.h>
using namespace std;

inline int cube(int n)
{
	return n*n*n;
}

int main()
{
	int i;
	cout<<"Enter No.\n";
	cin>>i;
	cout<<"Cube : "<<cube(i);
	return 0;
	
}
