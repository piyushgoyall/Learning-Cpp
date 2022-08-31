//wap to swap two numbers using the third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter the second number : ";
	cin>>b;
	cout<<"\n";
	c=b;
	b=a;
	a=c;
	cout<<"After swapping : ";
	cout<<"\n";
	cout<<"\n";
	cout<<"First number : "<<a;
	cout<<"\n";
	cout<<"\n";
	cout<<"Second number : "<<b;
}
