//wap to enter two numbers and perform all arithmetic operations 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter the second number : ";
	cin>>b;
	cout<<"\n";
	c=a+b;
	cout<<"Sum = "<<c;
	cout<<"\n";
	cout<<"\n";
	d=a-b;
	cout<<"Difference = "<<d;
	cout<<"\n";
	cout<<"\n";
	e=a*b;
	cout<<"Product = "<<e;
	cout<<"\n";
	cout<<"\n";
	if(b!=0)
	{
		f=a/b;
		cout<<"Divide = "<<f;
	}
	else
	{
		cout<<"Division not possible";
	}
	cout<<"\n";
	cout<<"\n";
	if(b!=0)
	{
		if(a>=b)
		{
			g=a%b;
			cout<<"Remainder = "<<g;
		}
		else
		{
			cout<<"Remainder less then 1";
		}
	}
	else
	{
		cout<<"Division not possible";
	}
		
}
