#include<iostream>
using namespace std;
class A
{
	public:
		void sum()
		{
			int a,b,c;
			cout<<"Enter first number : ";
			cin>>a;
			cout<<"\n";
			cout<<"Enter second number : ";
			cin>>b;
			cout<<"\n";
			c=a+b;
			cout<<"Sum : "<<c;
		}
		void diff()
		{
			int a,b,c;
			cout<<"Enter first number : ";
			cin>>a;
			cout<<"\n";
			cout<<"Enter second number : ";
			cin>>b;
			cout<<"\n";
			c=a-b;
			cout<<"Difference : "<<c;
		}
};
class B: public A
{
	public:
		void call()
		{
			B ob;
			ob.sum();
		}
};
class C: public A
{
	public:
		void name()
		{
			C pp;
			pp.diff();
		}
};
int main()
{
	B ob;
	ob.call();
	cout<<"\n";
	cout<<"\n";
    	C pp;
    	pp.name();
}
