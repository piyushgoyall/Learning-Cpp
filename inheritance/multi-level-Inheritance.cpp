#include<iostream>
using namespace std;
class A
{
	public:
	int a,b,c;	
};

class B : public A
{
		public:
		
		void sum()
		{
			cout<<"Enter the first number : ";
			cin>>a;
			cout<<"\n";
			cout<<"Enter the second number  : ";
			cin>>b;
			cout<<"\n";
			c = a+b;
			cout<<"Sum of entered numbers :  "<<c;	
		}	
};

class C : public B
{
	
};
int main()
{
	B ob;
	ob.sum();
}
