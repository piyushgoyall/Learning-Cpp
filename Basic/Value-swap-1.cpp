//wap to swap two numbers without using the third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter the second number : ";
	cin>>b;
	cout<<"\n";
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping : ";
	cout<<"\n";
	cout<<"\n";
	cout<<"First number : "<<a;
	cout<<"\n";
	cout<<"\n";
	cout<<"Second number : "<<b;
}
