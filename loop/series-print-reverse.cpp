//wap to print all natural numbers from 1 to n
#include<iostream>
using namespace std;
class print
{
	public:
		void series()
		{
			int n;
			cout<<"Enter the ending value : ";
			cin>>n;
			cout<<"\n";
			cout<<"Natural numbers from ending number to 1 : ";
			cout<<"\n";
			cout<<"\n";
			for(int i=n;i>=1;i--)
			{
				cout<<i;
				cout<<"\n";
			}
		}
};
int main()
{
	print ob;
	ob.series();
}
