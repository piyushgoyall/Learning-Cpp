#include<iostream>
using namespace std;
class piyush
{
	public:
		void var()
		{
			int a;
			cout<<"Enter the number : ";
			cin>>a;
			cout<<"\n";
			cout<<"You entered : "<<a;
			cout<<"\n";
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
