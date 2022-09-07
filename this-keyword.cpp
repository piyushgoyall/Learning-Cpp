#include<iostream>
using namespace std;
class A
{
	public:
		int a,b,c;
		void sum(int a, int b, int c)
		{
			this-> a=a;
			this-> b=b;
			this-> c=c;
		}
		void print()
		{
			cout<<a<<b<<c;
		}
};
int main()
{
	A ob;
	ob.sum(10,20,30);
	ob.print();
}
