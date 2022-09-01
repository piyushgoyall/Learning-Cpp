#include<iostream>
using namespace std;
class piyush
{
	public:
	piyush()
	{
		cout<<"MTB";
	}	
	piyush(int a)
	{
		cout<<a;
	}
};

int main()
{
	piyush pp();
	int d;
	cout<<"Enter the number : ";
	cin>>d;
	piyush pp1(d);
}
