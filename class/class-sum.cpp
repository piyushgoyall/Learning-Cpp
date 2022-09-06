#include<iostream>
using namespace std;
class piyush
{
	public:
	void sum()
	{
		float a,b,c;
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
int main()
{
	piyush ob;
	ob.sum();
}
