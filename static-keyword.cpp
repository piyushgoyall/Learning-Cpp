#include<iostream>
using namespace std;
class piyush
{
	public:
		void var()
		{
			static int a=1;
			cout<<"Number : "<<a;
			a = a+1;
		}
};
int main()
{
	int i=1;
	for(i=1;i<=5;i++)
	{
		piyush ob;
		ob.var();
		cout<<"\n";
	}
}
