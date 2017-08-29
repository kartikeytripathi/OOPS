#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, arr[100],sum=0,average=0;
	cout<<"Enter total Number of values\n";
	cin>>n;
	cout<<"Enter "<<n<<" Numbers\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum += arr[i];
	}

	cout<<"Sum = "<<sum;
	cout<<"\n";
	average = sum/n;
	cout<<"Average = "<<average;

	getch();
}