#include<iostream>
using namespace std;
class A
{
	public:
		void var()
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
class B: public A{};
class C: public B{};
int main()
{
	C ob;
	ob.var();
}
