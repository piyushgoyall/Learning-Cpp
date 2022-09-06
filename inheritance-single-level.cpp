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
class B: public A 
{
	public:
		void call()
		{
			B ob;
			ob.sum();
		}
};

int main()
{
	B ob;
	ob.call();
}

