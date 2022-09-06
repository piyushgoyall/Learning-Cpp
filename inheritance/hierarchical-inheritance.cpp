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
};
class B
{
	public:
		void diff()
		{
			int d,e,f;
			cout<<"Enter first number : ";
			cin>>d;
			cout<<"\n";
			cout<<"Enter second number : ";
			cin>>e;
			cout<<"\n";
			f=d-e;
			cout<<"Difference : "<<f;
		}
};
class C: public A,B
{
	public:
		void call()
		{
			C ob;
			ob.sum();
			cout<<"\n";
			cout<<"\n";
			ob.diff();
		}
};

int main()
{
	C ob;
	ob.call();
}

